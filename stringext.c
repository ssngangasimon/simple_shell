#include "shell.h"

/**
 * Copies a string.
 * @param dest: Destination string.
 * @param src: Source string.
 * @return Pointer to destination.
 */
char *_strcpy(char *dest, const char *src) {
    char *save = dest;
    if (dest != src && src) {
        while ((*dest++ = *src++));
    }
    return save;
}

/**
 * Duplicates a string.
 * @param str: String to duplicate.
 * @return Pointer to the duplicated string.
 */
char *_strdup(const char *str) {
    char *dup = malloc((_strlen(str) + 1) * sizeof(char));
    if (dup) {
        _strcpy(dup, str);
    }
    return dup;
}
