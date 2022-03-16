#include "main.h"

/**
 * print_alphabet - prints alphabet from a to z
 * Return: 0(success)
 */

void print_alphabet(void)
{
	char alp;

	alp = 'a';

	while (alp <= 'z')
	{
		_putchar(alp);
		alp++;
	}
	_putchar('\n');
}
