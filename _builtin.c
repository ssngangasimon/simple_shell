#include "shell.h"

/**
 * Exits the shell with a given status.
 * @param info: Pointer to info_t structure containing arguments.
 * @return Exits with status or continues if not "exit".
 */
int _myexit(info_t *info) {
    int exit_status = 0;

    if (info->argv[1]) {  // Check for exit argument
        exit_status = _erratoi(info->argv[1]);
        if (exit_status == -1) {
            info->status = 2;
            print_error(info, "Illegal number: ");
            // Error handling code here
        }
        else {
            exit(exit_status);
        }
    }
    return exit_status;
}
