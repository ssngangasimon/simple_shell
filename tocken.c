#include "shell.h"

/**
 * Splits a string into words.
 * @param str: Input string.
 * @param d: Delimiter string.
 * @return Pointer to an array of strings, or NULL on failure.
 */
char **strtow(char *str, const char *d) {
    int count = 0, i = 0;
    char **words;

    // Counting the number of words
    for (i = 0; str[i]; i++) {
        if ((i == 0 || is_delim(str[i - 1], d)) && !is_delim(str[i], d)) {
            count++;
        }
    }

    // Allocating space for pointers to words
    words = malloc(sizeof(char*) * (count + 1));
    if (!words) {
        return NULL;  // Memory allocation failure
    }

    // Filling the array with words
    int word_index = 0, j = 0;
    for (i = 0; str[i] && word_index < count; i++) {
        if (!is_delim(str[i], d)) {
            if (i == 0 || is_delim(str[i - 1], d)) {
                // Find the word length
                for (j = i; str[j] && !is_delim(str[j], d); j++);
                words[word_index] = strndup(str + i, j - i);
                word_index++;
                i = j - 1;
            }
        }
    }
    words[count] = NULL;

    return words;
}
