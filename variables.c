#include "shell.h"

/**
 * Test if current char in buffer is a chain delimiter.
 * @param info: Parameter struct.
 * @param buf: Char buffer.
 * @param p: Current position in buf.
 * @return 1 if chain delimiter, 0 otherwise.
 */
int is_chain(info_t *info, char *buf, size_t *p) {
    if (buf[*p] == '|' && buf[*p + 1] == '|') {
        buf[*p] = 0;
        (*p)++;
        info->cmd_buf_type = CMD_OR;
        return 1;
    } else if (buf[*p] == '&' && buf[*p + 1] == '&') {
        buf[*p] = 0;
        (*p)++;
        info->cmd_buf_type = CMD_AND;
        return 1;
    }
    return 0;
}
