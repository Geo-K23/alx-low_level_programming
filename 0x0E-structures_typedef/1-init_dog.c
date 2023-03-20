#include "dog.h"
/**
 * init_dog - initializes a variable of type struct dog
 * @d: is a variable of type point
 * @name: is the name of the dog
 * @age: is the age of the dog
 * @owner: is the owner of the dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
