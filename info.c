#include "shell.h"

/**
 * Initializes info_t struct.
 * @param info: Pointer to info_t structure.
 */
void clear_info(info_t *info) {
    if (!info) {
        return;
    }
    info->arg = NULL;
    info->argv = NULL;
    info->path = NULL;
    info->argc = 0;
}

/**
 * Sets information in the info_t struct.
 * @param info: Pointer to info_t structure.
 * @param av: Argument vector.
 */
void set_info(info_t *info, char **av) {
    if (!info || !av) {
        return;
    }
    info->fname = av[0];
    info->argv = info->arg ? strtow(info->arg, " \t") : NULL;
    // More implementation details go here
}
