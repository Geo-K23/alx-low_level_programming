#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - frees dogs
 * @d: is the pointer to the to free
 *
 * Return: Nothing
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
