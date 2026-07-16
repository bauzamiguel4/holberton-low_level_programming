#include <stdio.h>
/**
 * main - Entry Point
 *
 * Return: Always 0
 */
int main(void)
{
	int a = 0;
	char b = 'a';

	while (a < 10)
	{
		putchar(a + '0');
		a++;
	}
	while (b <= 'f')
	{
		putchar(b);
		b++;
	}
	putchar('\n');
	return (0);
}
