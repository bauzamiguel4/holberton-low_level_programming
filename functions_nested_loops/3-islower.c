#include "main.h"

/**
 * _islower - checks if lower
 * Return: 1 or 0
 * @c: char
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
