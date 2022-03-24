#include "main.h"

/**
 * swap_int - swaps the value of two integers
 * @a: integer to be swapped
 * @b: Integer to be swapped
 */

void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
