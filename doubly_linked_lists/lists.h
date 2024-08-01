#ifndef LISTS_H
#define LISTS_H
#include <stdio.h>
#include <stdlib.h>

/**
 * struct list_s - doubly linked list
 * @n: integer
 * @prev: pointer to the previous node
 * @next: pointer to the next node
 *
 * Description: doubly linked list node structure
 */
typedef struct list_s
{
  int n;
  struct list_s *prev;
  struct list_s *next;
} list_t;
size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const int n);
list_t *add_node_end(list_t **head, const int n);
void free_list(list_t *head);
list_t *get_node_at_index(list_t *head, unsigned int index);
int sum_list(list_t *head);
list_t *insert_node_at_index(list_t **head, unsigned int idx, int n);
int delete_node_at_index(list_t **head, unsigned int index);

#endif