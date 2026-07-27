#include "main.h"

/**
 * print_triangle - prints a triangle, followed by a new line
 * @size: size of the triangle
 *
 * Return: void
 */
void print_triangle(int size)
{
	int row;
	int col;

	if (size > 0)
	{
		row = 1;
		while (row <= size)
		{
			col = 0;
			while (col < (size - row))
			{
				_putchar(' ');
				col++;
			}
			col = 0;
			while (col < row)
			{
				_putchar('#');
				col++;
			}
			_putchar('\n');
			row++;
		}
	}
	else
	{
		_putchar('\n');
	}
}
