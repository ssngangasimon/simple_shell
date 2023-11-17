#include "shell.h"

/**
 * Fills memory with a constant byte.
 * @param s: Pointer to the memory area.
 * @param b: Byte to fill s with.
 * @param n: Amount of bytes to be filled.
 * @return Pointer to the memory area s.
 */
char *_memset(char *s, char b, unsigned int n) {
    for (unsigned int i = 0; i < n; i++) {
        s[i] = b;
    }
    return s;
}

/**
 * Frees a string of strings.
 * @param pp: String of strings.
 */
void ffree(char **pp) {
    if (pp) {
        for (char **a = pp; *a; a++) {
            free(*a);
        }
        free(pp);
    }
}
