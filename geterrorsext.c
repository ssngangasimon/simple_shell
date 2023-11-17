#include "shell.h"

/**
 * Converts a string to an integer with error checking.
 * @param s: String to be converted.
 * @return Converted number or -1 on error.
 */
int _erratoi(const char *s) {
    unsigned long int result = 0;

    if (*s == '+') {
        s++;  // Skip the plus sign
    }
    for (; *s; s++) {
        if (*s >= '0' && *s <= '9') {
            result = result * 10 + (*s - '0');
            if (result > INT_MAX) {
                return -1;  // Overflow error
            }
        } else {
            return -1;  // Non-numeric character error
        }
    }
    return (int)result;
}
