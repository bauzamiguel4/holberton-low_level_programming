#include "main.h"

/**
 * leet - encodes a string into 1337
 * @s: string to encode
 *
 * Return: pointer to encoded string
 */
char *leet(char *s)
{
	int i;
	int j;
	char orig[] = "aAeEoOtTlL";
	char repl[] = "4433007711";

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (orig[j] != '\0')
		{
			if (s[i] == orig[j])
			{
				s[i] = repl[j];
			}
			j++;
		}
		i++;
	}

	return (s);
}
