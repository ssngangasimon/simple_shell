#include "shell.h"

/**
 * Main shell loop.
 * @param info: The parameter & return info struct.
 * @param av: The argument vector from main().
 * @return 0 on success, 1 on error, or error code.
 */
int hsh(info_t *info, char **av) {
    ssize_t r = 0;
    int builtin_ret = 0;

    while (r != -1 && builtin_ret != -2) {
        clear_info(info);
        if (interactive(info)) {
            _puts("$ ");
        }
        _eputchar(BUF_FLUSH);
        r = get_input(info);
        if (r != -1) {
            set_info(info, av);
            builtin_ret = find_builtin(info);
            // Further implementation here
        }
    }
    return 0;  // Return appropriate status
}
