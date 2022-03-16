#include "main.h"

/**
 * print_alphabet_x10 - prints the aplha bet ten times
 *
 * Return: 0
 */

void print_alphabet_x10(void)
{
	int numb = 0;
	char alpha;

	while (numb < 10)
	{
		alpha = 'a';
		while (alpha <= 'z')
		{
			_putchar(alpha);
			alpha++;
		}
		_putchar('\n');
		alpha++;
	}
}
