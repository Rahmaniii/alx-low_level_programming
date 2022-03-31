#include "main.h"

/**
 * _puts_recursion - it prints a string
 * @s: stint to be printed
 *
 * Return: Always 0
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_put_recursion(s + 1);
}
