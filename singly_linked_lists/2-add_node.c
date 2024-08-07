#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node - Adds a new node at the beginning of a list_t list.
 * @head: A pointer to the head of the list_t list.
 * @str: The string to be added to the list_t list.
 *
 * Return: If the function fails - NULL.
 *         Otherwise - the address of the new element.
 */

list_t *add_node(list_t **head, const char *str)
{
    list_t *new;

    new = malloc(sizeof(list_t));
    if (new == NULL)
        return(NULL);

    new->str = strdup(str);
    if (new->str == NULL)
    {
        free(new);
        return(NULL);
    }

    new->len = 0;
    while (str[new->len])
        new->len++;

    new->next = *head;
    *head = new;
    return(new);
}
