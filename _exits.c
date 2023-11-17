#include "shell.h"

/**
 * Copy a string with a limit.
 * @param dest: Destination string.
 * @param src: Source string.
 * @param n: Number of characters to copy.
 * @return Pointer to the destination string.
 */
char *_strncpy(char *dest, const char *src, int n) {
    int i;

    for (i = 0; i < n && src[i] != '\0'; i++) {
        dest[i] = src[i];
    }
    for ( ; i < n; i++) {
        dest[i] = '\0';
    }
    return dest;
}

/**
 * Concatenate two strings with a limit.
 * @param dest: Destination string.
 * @param src: Source string.
 * @param n: Number of characters from src to add.
 * @return Pointer to the destination string.
 */
char *_strncat(char *dest, const char *src, int n) {
    int dest_len = strlen(dest);
    int i;

    for (i = 0 ; i < n && src[i] != '\0' ; i++) {
        dest[dest_len + i] = src[i];
    }
    dest[dest_len + i] = '\0';

    return dest;
}
