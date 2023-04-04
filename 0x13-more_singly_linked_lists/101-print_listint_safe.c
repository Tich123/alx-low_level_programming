#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint_safe - Print a listint_t linked list
 * @head: Pointer to head of list
 *
 * Return: Number of nodes in list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nodes = 0;
	const listint_t *temp;

	temp = head;
	while (temp != NULL)
	{
		printf("[%p] %d\n", (void *)temp, temp->n);
		nodes++;
		if (temp <= temp->next)
		{
			printf("-> [%p] %d\n", (void *)temp->next, temp->next->n);
			break;
		}
		temp = temp->next;
	}
	return (nodes);
}
