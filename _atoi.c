#include "shell.h"

/**
 * Check if the shell is in interactive mode.
 * @param info: Pointer to info_t structure.
 * @return 1 if interactive mode, 0 otherwise.
 */
int interactive(const info_t *info) {
    return (isatty(STDIN_FILENO) && info->readfd <= 2);
}

/**
 * Check if a character is a delimiter.
 * @param c: Character to check.
 * @param delim: Delimiter string.
 * @return 1 if true, 0 if false.
 */
int is_delim(char c, const char *delim) {
    for (; *delim; ++delim) {
        if (*delim == c) {
            return 1;
        }
    }
    return 0;
}
