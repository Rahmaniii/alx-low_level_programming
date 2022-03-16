#include "main.h"

/**
 * print_last_digit - prints the last digit
 * @n: number that the last digit is printed
 * Return: 0 last digit
 */

int print_last_digit(int n)
{
	if (n < 0)
		n *= -1;
	
	_putchar('0' + (n % 10));
	return (n % 10);
}