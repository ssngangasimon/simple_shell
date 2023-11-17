#include "shell.h"

/**
 * Determines the length of a linked list.
 * @param h: Pointer to the first node of the list.
 * @return Size of the list.
 */
size_t list_len(const list_t *h) {
    size_t len = 0;
    while (h) {
        len++;
        h = h->next;
    }
    return len;
}

/**
 * Converts a list to an array of strings.
 * @param head: Pointer to the first node of the list.
 * @return Array of strings.
 */
char **list_to_strings(const list_t *head) {
    size_t len = list_len(head), i;
    char **strings;

    strings = malloc(sizeof(char *) * (len + 1));
    if (!strings) {
        return NULL;  // Memory allocation failure
    }
    for (i = 0; head; i++, head = head->next) {
        strings[i] = head->str ? strdup(head->str) : NULL;
    }
    strings[len] = NULL;  // Null-terminate the array

    return strings;
}
