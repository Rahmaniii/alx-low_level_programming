#include "main.h"

/**
 * _strlen - returns lenght of a string
 * @s: lenght
 * Return: 0(always)
 */

int _strlen(char *s)
{
	int lnght = 0;

	while (*s != '\0')
	{
		lnght++;
		s++;
	}

	return (lnght);
}
