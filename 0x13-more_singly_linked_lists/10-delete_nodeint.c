#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * delete_nodeint_at_index - deletes the node at,
 *  index of a listint_t linked list.
 *  @head: is a double pointer to the head of the list
 *  @index: is the index of the node to be deleted
 *  Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *prev, *curr;
	unsigned int count = 0;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
		return (1);
	}
	prev = NULL;
	curr = *head;

	while (curr != NULL && count < index)
	{
		prev = curr;
		curr = curr->next;
		count++;
	}
	if (curr == NULL)
		return (-1);
	prev->next = curr->next;
	free(curr);
	return (1);
}
