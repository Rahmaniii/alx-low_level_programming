#include <stdio.h>

/**
 * main - Entry point
 * description - putchar
 * Return: 0 always(success)
 */

int main(void)
{
	int dig11;
	int dig12;
	int dig21;
	int dig22;

	for (dig11 = '0'; dig11 <= '9'; dig11++)
	{
		for (dig12 = '0'; dig12 <= '9'; dig12++)
		{
			for (dig21 = dig11; dig21 <= '9'; dig21++)
			{
				for (dig22 = dig12 + 1; dig22 <= '9'; dig22++)
				{
					putchar(dig11);
					putchar(dig12);
					putchar(' ');
					putchar(dig21);
					putchar(dig22);

					if (!((dig11 == '9' && dig12 == '8') &&
						(dig21 == '9' && dig22 == '9')))
						{
							putchar(',');
							putchar(' ');
						}
				}
				dig22 = '0';
			}
		}
	}
	putchar('\n');

	return (0);
}
