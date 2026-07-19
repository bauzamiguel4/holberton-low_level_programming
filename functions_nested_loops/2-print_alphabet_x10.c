#include "main.h"

/**
 * print_alphabet_x10 - prototype
 *
 * Return: always 0
 */
void print_alphabet_x10(void)
{
	int i;
	char letter;

	i = 0;
	while (i < 10)
	{
		letter = 'a';
		while (letter <= 'z')
		{
			_putchar(letter);
			letter++;
		}
		_putchar('\n');
		i++;
	}
}
