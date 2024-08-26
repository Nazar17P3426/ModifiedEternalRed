[BITS 16]
[ORG 0x7C00]

start:
    ; Set video mode to 80x25 text mode
    mov ax, 0x03
    int 0x10

    ; Set the text attribute (background red, foreground white)
    mov ah, 0x09
    mov al, ' '         ; Character (space) to fill
    mov bh, 0x00        ; Page number
    mov bl, 0x4F        ; Attribute: background red (0x4), text white (0xF)
    mov cx, 2000        ; Number of characters (80x25 screen)
    int 0x10            ; Apply the attribute

    ; Display initial message
    mov si, message
    call print_string

wait_for_key:
    ; Wait for key press
    mov ah, 0x00
    int 0x16            ; Wait until a key is pressed

    ; Clear the screen
    call clear_screen

    ; Start scrolling text with color change
    call scroll_text

    ; Loop back to wait for key press again
    jmp wait_for_key

hang:
    jmp hang            ; Infinite loop to keep the program running

print_string:
    mov ah, 0x0E        ; Teletype mode
.next_char:
    lodsb               ; Load next byte from message into AL
    cmp al, 0           ; Check if it's the end of the string (null terminator)
    je done
    int 0x10            ; Print the character
    jmp .next_char
done:
    ret

clear_screen:
    ; Set the screen to black (background black, text black)
    mov ah, 0x09
    mov al, ' '         ; Character (space) to fill
    mov bh, 0x00        ; Page number
    mov bl, 0x00        ; Attribute: background black (0x0), text black (0x0)
    mov cx, 2000        ; Number of characters (80x25 screen)
    int 0x10            ; Apply the attribute
    ret

scroll_text:
    ; Start scrolling text with color changes
    mov si, scroll_message
    mov cx, 3           ; Number of color variations

scroll_loop:
    ; Set the attribute to a different color each loop
    call change_color

    ; Print the scrolling message
    call print_scroll_message

    ; Wait for a bit to simulate scrolling
    call delay

    loop scroll_loop    ; Loop until all colors are used
    ret

change_color:
    ; Cycle through different colors for the background and text
    mov ah, 0x09
    mov al, ' '         ; Character (space) to fill
    mov bh, 0x00        ; Page number
    mov bl, [color]     ; Load the current color attribute
    mov cx, 2000        ; Number of characters (80x25 screen)
    int 0x10            ; Apply the color

    ; Update color for the next loop (simple cycle)
    add byte [color], 0x10
    cmp byte [color], 0xCF
    jbe done_color_change
    mov byte [color], 0x4F
done_color_change:
    ret

print_scroll_message:
    mov ah, 0x0E        ; Teletype mode
.next_scroll_char:
    lodsb               ; Load next byte from message into AL
    cmp al, 0           ; Check if it's the end of the string (null terminator)
    je done_scroll
    int 0x10            ; Print the character
    jmp .next_scroll_char
done_scroll:
    ret

delay:
    ; Simple delay loop
    mov cx, 0FFFFh
.delay_loop:
    loop .delay_loop
    ret

scroll_message db 'EnternalRed.exe EnternalRed.exe EnternalRed.exe EnternalRed.exe EnternalRed.exe EnternalRed.exe ', 0
message db 'Your Computer Has Encountered Error', 0x0D, 0x0A, 'Press Any Key to Continue...', 0
color db 0x4F    ; Initial color (background red, text white)

times 510-($-$$) db 0   ; Fill the rest of the sector with zeros
dw 0xAA55               ; Boot signature
