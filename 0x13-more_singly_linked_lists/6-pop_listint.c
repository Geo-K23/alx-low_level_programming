#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: pointer to the pointer to the head of the list listint_t
 * Return: the head node's data(n)
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int i;

	if (head == NULL || *head == NULL)
		return (0);
	temp = *head;
	i = temp->n;
	*head = temp->next;
	free(temp);

	return (i);
}
