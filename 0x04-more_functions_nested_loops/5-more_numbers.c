#include "main.h"

/**
 * more_numbers - print 1 t0 14 ten times
 *
 */

void more_numbers(void)
{
	int i;
	char j;

	for (i = 0; i <= 10; i++)
	{
		for (j = 0; j <= 4; j++)
		{

		if (j / 10 > 0)
			_putchar((j / 10) + '0');
		_putchar((i % 10) + '0');
		}
		_putchar('\n');
	}
}
