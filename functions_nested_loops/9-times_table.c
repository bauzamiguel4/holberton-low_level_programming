#include "main.h"

/**
 * times_table - prints 9 times table
 * Return: void
 */
void times_table(void)
{
	int r, c, p;

	r = 0;
	while (r <= 9)
	{
		c = 0;
		while (c <= 9)
		{
			p = r * c;
			if (c == 0)
			{
				_putchar('0' + p);
			}
			else if (p < 10)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar('0' + p);
			}
			else
			{
				_putchar(' ');
				_putchar('0' + (p / 10));
				_putchar('0' + (p % 10));
			}

			if (c < 9)
			{
				_putchar(',');
			}
			c++;
		}
		_putchar('\n');
		r++;
	}
}
