#include "main.h"
/**
 * print_triangle - prints a triangle, followed by a new line
 * @size: the size of the triangle
 *
 * Return: void
 */
void print_triangle(int size)
{
	int row = 1;
	int col;

	if (size > 0)
	{
		while (row <= size)
		{
			col = 0;
			while (col < size - row)
			{
				_putchar(' ');
				col = col + 1;
			}
			while (col < size)
			{
				_putchar('#');
				col = col + 1;
			}

			_putchar('\n');
			row = row + 1;
		}
	}
	else
	{
		_putchar('\n');
	}
}
