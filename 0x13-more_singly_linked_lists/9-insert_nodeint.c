#include <stdio.h>
#include <stdlib.h>

/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 * 
 */
typedef struct listint_s
{
    int n;
    struct listint_s *next;
} listint_t;

/**
 * insert_nodeint_at_index - insert node at a given position
 * @head: head of list
 * @idx: index of the node to insert
 * @n: value to insert in the new node
 *
 * Return: address of new node, NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
    listint_t *new_node, *temp;
    unsigned int i;

    if (!head)
        return (NULL);

    new_node = malloc(sizeof(listint_t));
    if (!new_node)
        return (NULL);

    new_node->n = n;

    if (!idx)
    {
        new_node->next = *head;
        *head = new_node;
        return (new_node);
    }

    temp = *head;
    for (i = 0; i < idx - 1 && temp; i++)
        temp = temp->next;

    if (!temp)
    {
        free(new_node);
        return (NULL);
    }

    new_node->next = temp->next;
    temp->next = new_node;

    return (new_node);
}
