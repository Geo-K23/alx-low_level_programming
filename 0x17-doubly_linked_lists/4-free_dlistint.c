#include <stdlib.h>
#include "lists.h"
/**
 * free_dlistint - frees a dlistint_t list
 * @head: Pointer to the head of the list
 * Return: nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}
