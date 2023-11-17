#include "shell.h"

/**
 * Adds a node to the start of the list.
 * @param head: Address of pointer to head node.
 * @param str: String field of node.
 * @param num: Node index used by history.
 * @return Pointer to new head of the list.
 */
list_t *add_node(list_t **head, const char *str, int num) {
    list_t *new_node;

    if (!head) {
        return NULL;
    }
    new_node = malloc(sizeof(list_t));
    if (!new_node) {
        return NULL;  // Memory allocation failure
    }
    new_node->num = num;
    new_node->str = str ? _strdup(str) : NULL;
    new_node->next = *head;
    *head = new_node;

    return new_node;
}
