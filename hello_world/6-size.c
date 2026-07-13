#include <stdio.h>
/**
 * main - the entry point
 * 
 * Return: always 0 (success)
 */
int main(void)
{
	printf("%zu\n", sizeof(char));
	printf("%zu\n", sizeof(unsigned char));
	printf("%zu\n", sizeof(short));
	printf("%zu\n", sizeof(unsigned short));
	printf("%zu\n", sizeof(int));
	printf("%zu\n", sizeof(unsigned int));
	printf("%zu\n", sizeof(long));
	printf("%zu\n", sizeof(unsigned long));

	return (0);
}
