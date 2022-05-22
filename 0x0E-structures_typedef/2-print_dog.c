#include <stdio.h>
#include "dog.h"

/**
 * print_dog - prints struct dog
 * @d: pointer to struct dog
 *
 * Return: 0
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if ((*d).name == NULL)
			printf("nil\n")
		else
			printf("Name: %s\n", (*d).name);
		if ((*d).age == NULL)
			printf("nil\n")
		else
			printf("Age: %d\n", (*d).age);
		if ((*d).owner == NULL)
			printf("nil\n")
		else
			printf("Owner: %d\n", (*d).owner);
	}
}
