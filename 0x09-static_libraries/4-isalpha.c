#include "main.h"

/**
 * _isalpha - checks if c is a letter, lower or upper case
 * @c: the code being checked
 * Return: 1(success), else, 0
 */

int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
