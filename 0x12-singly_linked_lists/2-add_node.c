#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"
/**
 * _strlen - counts the number of characters in the input string
 * @s: string whose length is to be determined
 * Return: success
 */
int _strlen(const char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;
	return (len);
}
/**
 * add_node - adds a new node at the beginning of a list_t
 * @head: is a pointer to a pointer to the head of the list
 * @str: string to insert into the node of the linked list
 * Return: the address of the new node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *temp;

	temp = (malloc(sizeof(list_t)));
	if (!temp)
	{
		free(temp);
		return (NULL);
	}
	if (*head == NULL)
	{
		temp->next = *head;
		temp->str = strdup(str);
		temp->len = _strlen(str);
		*head = temp;
	} else
	{
		temp->next = *head;
		temp->str = strdup(str);
		temp->len = _strlen(str);
		*head = temp;
	}
	return (*head);
}
