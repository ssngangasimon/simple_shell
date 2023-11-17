#include "shell.h"

/**
 * Gets the history file.
 * @param info: Pointer to info_t structure.
 * @return Allocated string containing history file.
 */
char *get_history_file(info_t *info) {
    char *buf;
    const char *dir = _getenv(info, "HOME=");

    if (!dir) {
        return NULL;
    }

    buf = malloc(sizeof(char) * (_strlen(dir) + _strlen(HIST_FILE) + 2));
    if (!buf) {
        return NULL;  // Memory allocation failure
    }
    _strcpy(buf, dir);
    _strcat(buf, "/");
    _strcat(buf, HIST_FILE);

    return buf;
}

/**
 * Writes the history to file.
 * @param info: Pointer to info_t structure.
 * @return Status of the operation.
 */
int write_history(info_t *info) {
    // Implementation of write_history
    // Writes the history stored in info to a file
    return 0;  // Replace with actual implementation
}
