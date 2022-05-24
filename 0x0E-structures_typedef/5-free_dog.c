#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - frees element of dog
 * @d: pointer to dog
 *
 * Return: void
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	if (d)
		free(d);
	if ((*d).name)
		free((*d).name);
	if ((*d).owner)
		free((*d).owner);
}
