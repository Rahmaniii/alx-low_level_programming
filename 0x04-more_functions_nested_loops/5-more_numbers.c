#include "main.h"

/**
 * more_numbers - print 1 t0 14 ten times
 *
 */

void more_numbers(void)
{
	int i;
	int j;

	for (i = 0; i <= 10; i++)
	{
		for (j = 0; j <= 4; j++)
		{
			_putchar(j);
		}
		_putchar(i);
	}
	_putchar('\n');
}
