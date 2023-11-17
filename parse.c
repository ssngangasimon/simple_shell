#include "shell.h"
#include <sys/stat.h>

/**
 * Determines if a file is an executable command.
 * @param info: Pointer to the info struct.
 * @param path: Path to the file.
 * @return 1 if true, 0 otherwise.
 */
int is_cmd(info_t *info, const char *path) {
    struct stat st;

    if (!path || stat(path, &st)) {
        return 0;
    }
    return (st.st_mode & S_IFREG) ? 1 : 0;
}

/**
 * Duplicates characters.
 * @param pathstr: The PATH string.
 * @param start: Starting index.
 * @param stop: Stopping index.
 * @return Pointer to the duplicated string.
 */
char *dup_chars(const char *pathstr, int start, int stop) {
    // Implementation of character duplication
    // Return the duplicated string
    return NULL;  // Replace with actual implementation
}
