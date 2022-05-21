#include "dog.h"

/**
 * init_dog - initializes a variable type of struct dog
 * @d: pointer to structure
 * @name: pointer to name
 * @age: poniter to age
 * @owner:pointer to owner
 *
 * Return: 0
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;
}
