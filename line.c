#include "shell.h"

/**
 * Buffers chained commands.
 * @param info: Parameter struct.
 * @param buf: Address of buffer.
 * @param len: Address of length variable.
 * @return Bytes read.
 */
ssize_t input_buf(info_t *info, char **buf, size_t *len) {
    ssize_t r = 0;
    size_t len_p = 0;

    if (!*len) {
        free(*buf);
        *buf = NULL;
        signal(SIGINT, sigintHandler);
        r = getline(buf, &len_p, stdin);  // Using getline for input
    }
    return r;
}
