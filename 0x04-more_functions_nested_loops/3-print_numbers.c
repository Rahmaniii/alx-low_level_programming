#include "main.h"

/**
 * print_numbers - it prints numbers with _putchar
 *
 * Return: 0
 */

void print_numbers(void)
{
	char i;

	i = 0;
	while (i <= 9)
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
