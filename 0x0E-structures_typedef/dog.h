#ifndef DOG_H
#define DOG_H
/**
 * struct dog - defines a type struct dog
 * @name: is name of the dog
 * @age: is age of the dog
 * @owner: is owner of the dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
void free_dog(dog_t *d);
dog_t *new_dog(char *name, float age, char *owner);
#endif
