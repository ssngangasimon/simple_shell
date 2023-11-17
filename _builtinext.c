#include "shell.h"

/**
 * Display the history list with line numbers.
 * @param info: Pointer to info_t structure.
 * @return Always 0.
 */
int _myhistory(info_t *info) {
    print_list(info->history);
    return 0;
}

/**
 * Unset an alias.
 * @param info: Pointer to info_t structure.
 * @param str: Alias string.
 * @return 0 on success, 1 on error.
 */
int unset_alias(info_t *info, const char *str) {
    // Implementation of unset_alias functionality
    // Use info and str to handle the alias
    return 0;  // Return appropriate status
}
