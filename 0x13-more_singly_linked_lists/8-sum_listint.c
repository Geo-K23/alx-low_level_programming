#include <stdio.h>
#include "lists.h"
/**
 * sum_listint - returns the sum of all the data (n) of a listint_t list
 * @head: is the pointer to the head of the list
 * Return: sum of all data, or 0 if list is empty
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
