#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: string to evaluate
 * @accept: string containing accepted characters
 *
 * Return: number of bytes in initial segment of s consisting only of accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i;
	int j;
	int match;

	i = 0;
	while (s[i] != '\0')
	{
		match = 0;
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				match = 1;
				break;
			}
			j++;
		}
		if (match == 0)
		{
			return (i);
		}
		i++;
	}

	return (i);
}
