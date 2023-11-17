#include "shell.h"

/**
 * Fetches the string array copy of the environment.
 * @param info: Pointer to info_t structure.
 * @return Pointer to array of environment strings.
 */
char **get_environ(info_t *info) {
    if (!info->environ || info->env_changed) {
        free(info->environ);  // Free previous environment if any
        info->environ = list_to_strings(info->env);
        info->env_changed = 0;
    }

    return info->environ;
}

/**
 * Remove an environment variable.
 * @param info: Pointer to info_t structure containing arguments.
 * @return Status of the operation.
 */
int _unsetenv(info_t *info) {
    // Implementation of unsetenv functionality
    // Use info to handle the environment variable
    return 0;  // Return appropriate status
}
