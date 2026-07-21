#include main.h
/**
 * _isupper - checking for uppercase
 *
 * return: 1 upper 0 lower
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
