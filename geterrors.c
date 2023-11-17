#include "shell.h"

/**
 * Prints a string to stderr.
 * @param str: String to be printed.
 */
void _eputs(const char *str) {
    if (!str)
        return;

    while (*str) {
        _eputchar(*str++);
    }
}

/**
 * Writes a character to stderr.
 * @param c: Character to print.
 * @return 1 on success, -1 on error with errno set.
 */
int _eputchar(char c) {
    static int i = 0;
    static char buf[WRITE_BUF_SIZE];

    // Implementation of _eputchar
    // Handles the buffer and character writing to stderr
    return (c == BUFFER_FLUSH) ? flush_buffer(buf, &i) : buffer_char(buf, &i, c);
}
