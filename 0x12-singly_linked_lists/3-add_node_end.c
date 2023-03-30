#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: a pointer to a pointer to the head of the list
 * @str: string to be duplicated
 * Return: address of the new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	size_t str_len;

	list_t *new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
	{
		return (NULL);
	}
	str_len = 0;
	while (str[str_len] != '\0')
	{
		str_len++;
	}
	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->len = str_len;
	new_node->next = NULL;
	if (*head == NULL)
	{
		*head = new_node;
	} else
	{
		list_t *current_node = *head;

		while (current_node->next != NULL)
		{
			current_node = current_node->next;
		}
		current_node->next = new_node;
	}
	return (new_node);
}
