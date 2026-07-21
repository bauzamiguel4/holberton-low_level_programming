#include "main.h"
/**
 * _isdigit - checks for digit 0 - 9
 * @c: char
 * Return: 1 is digit, 0 not
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
