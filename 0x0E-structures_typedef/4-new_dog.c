#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - creates a new dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 * Return: Always 0
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;

	new_dog = malloc(sizeof(dog_t));

	if (new_dog == NULL)
		return (NULL);
	if ((*new_dog).name == NULL)
	{
		free(new_dog);
		free(owner);
		return (NULL);
	}
	if ((*new_dog).owner == NULL)
	{
		free(new_dog);
		free(name);
		return (NULL);
	}
	(*new_dog).owner = owner;
	(*new_dog).name = name;
	(*new_dog).age = age;

	return (NULL);
}
