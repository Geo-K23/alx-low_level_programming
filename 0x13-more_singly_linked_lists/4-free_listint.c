#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * free_listint - frees memory allocated to listint_t list.
 * @head: pointer to the head of list listint_t
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
