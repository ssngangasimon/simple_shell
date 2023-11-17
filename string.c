#include "shell.h"

/**
 * Returns the length of a string.
 * @param s: The string whose length to check.
 * @return Integer length of string.
 */
int _strlen(const char *s) {
    int i = 0;
    while (s && *s++) {
        i++;
    }
    return i;
}

/**
 * Lexicographic comparison of two strings.
 * @param s1: The first string.
 * @param s2: The second string.
 * @return Negative if s1 < s2, positive if s1 > s2, zero if s1 == s2.
 */
int _strcmp(const char *s1, const char *s2) {
    while (*s1 && *s2 && *s1 == *s2) {
        s1++;
        s2++;
    }
    return (int)(*s1 - *s2);
}
