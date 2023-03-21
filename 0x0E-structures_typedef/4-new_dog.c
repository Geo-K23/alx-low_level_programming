#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * new_dog - creates a new dog
 * @name: name for the new dog
 * @age: age of the new dog
 * @owner: owner of the new dog
 * Return: new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	unsigned int name_len, owner_len, i;
	dog_t *new_dog;

	/* Calculate the lengths of the name and owner strings */
	name_len = 0;
	while (name[name_len] != '\0')
		name_len++;
	owner_len = 0;
	while (owner[owner_len] != '\0')
		owner_len++;
	/* Allocate memory for a new dog struct */
	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);/* Return NULL if malloc fails */
	/* Allocate memory for name and owner strings */
	new_dog->name = malloc(name_len + 1);
	new_dog->owner = malloc(owner_len + 1);
	if (new_dog->name == NULL || new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog->owner);
		free(new_dog);
		return (NULL);
	}
	/* Copy name and owner strings into the new dog struct */
	for (i = 0; i < name_len; i++)
	{
		new_dog->name[i] = name[i];
	}
	new_dog->name[name_len] = '\0';
	for (i = 0; i < owner_len; i++)
	{
		new_dog->owner[i] = owner[i];
	}
	new_dog->owner[owner_len] = '\0';
	new_dog->age = age;
	return (new_dog);
}
