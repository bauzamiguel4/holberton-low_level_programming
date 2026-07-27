#include "main.h"

/**
 * more_numbers - prints 10 times numbers 0 to 14
 *
 * Return: void
 */
void more_numbers(void)
{
	int i;
	int num;

	i = 0;
	while (i < 10)
	{
		num = 0;
		while (num <= 14)
		{
			if (num >= 10)
			{
				_putchar((num / 10) + '0');
			}
			_putchar((num % 10) + '0');
			num++;
		}
		_putchar('\n');
		i++;
	}
}
