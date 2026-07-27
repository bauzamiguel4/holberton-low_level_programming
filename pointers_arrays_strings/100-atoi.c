#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: string to convert
 *
 * Return: integer value of converted string, or 0 if none
 */
int _atoi(char *s)
{
	int i;
	int sign;
	unsigned int res;
	int started;

	i = 0;
	sign = 1;
	res = 0;
	started = 0;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
		{
			sign *= -1;
		}
		if (s[i] >= '0' && s[i] <= '9')
		{
			started = 1;
			res = (res * 10) + (s[i] - '0');
		}
		else if (started)
		{
			break;
		}
		i++;
	}

	return (res * sign);
}
