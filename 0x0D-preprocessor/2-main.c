#include <stdio.h>

/**
 * main - prints name of file a program was compile from
 *
 * Return: 0
 */

int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
