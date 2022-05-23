#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - frees element of dog
 * @d: pointer to dog
 *
 * Return: 0
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d);
		free((*d).name);
		free((*d).owner);
	}
}
