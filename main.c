#include "shell.h"

/**
 * Entry point of the shell.
 * @param ac: Argument count.
 * @param av: Argument vector.
 * @return 0 on success, 1 on error.
 */
int main(int ac, char **av) {
    info_t info[] = { INFO_INIT };
    int fd = 2;  // Default to stderr

    if (ac == 2) {
        fd = open(av[1], O_RDONLY);
        if (fd == -1) {
            // Error handling based on errno
            exit(errno == EACCES ? 126 : 127);
        }
    }
    return hsh(info, av);  // Start the shell loop
}
