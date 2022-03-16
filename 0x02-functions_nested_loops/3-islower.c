#include "main.h"

/**
 * _islower - checks for a lower letter
 * @c: the value it checks
 * Return: 1 if c is lower case, else, 0
 */

int _islower(int c)
{
	if (c <= 'z' && c >= 'a')
	{
		return (1);
	}
	else
	{
		return (0);
}
