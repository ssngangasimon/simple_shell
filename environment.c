#include "shell.h"

/**
 * Prints the current environment.
 * @param info: Pointer to info_t structure.
 * @return Always 0.
 */
int _myenv(info_t *info) {
    print_list_str(info->env);
    return 0;
}

/**
 * Gets the value of an environment variable.
 * @param info: Pointer to info_t structure.
 * @param name: Environment variable name.
 * @return The value of the environment variable.
 */
char *_getenv(info_t *info, const char *name) {
    // Implementation of _getenv
    // Searches info->env for the variable 'name' and returns its value
    return NULL;  // Replace with actual implementation
}
