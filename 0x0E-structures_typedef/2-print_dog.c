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
			printf("Name: nil\n");
		else
			printf("Name: %s\n", (*d).name);
		if ((*d).age == 0)
			printf("Age: nil");
		else
			printf("Age: %.2f\n", (*d).age);
		if ((*d).owner == NULL)
			printf("Owner: nil\n");
		else
			printf("Owner: %s\n", (*d).owner);
	}
}
