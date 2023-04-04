#include "lists.h"
#include "stdlib.h"

/**
 * sum_listint - returns the sum of all the data(n) of a listint_t linked list
 * @head: pointer to the head of the linked list
 *
 * Return: the sum of all data, or 0 if list is empty
 */
int sum_listint(listint_t *head)
{
        int sum = 0;

        if (head == NULL)
                return (sum);

        while (head != NULL)
        {
                sum += head->n;
                head = head->next;
        }

        return (sum);
}

