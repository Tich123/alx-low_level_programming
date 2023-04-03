#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - Frees a listint_t linked list and sets its head to NULL.
 * @head: Pointer to pointer to the first node of the listint_t list.
 **/
void free_listint2(listint_t **head)
{
	listint_t *current, *tmp;

	if (head != NULL)
	{
		current = *head;
		while (current != NULL)
		{
			tmp = current;
			current = current->next;
			free(tmp);
		}
		*head = NULL;
	}
}

