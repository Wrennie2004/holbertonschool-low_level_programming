#include "main.h"

/*
 * void print_triangle(int size) - Write a function that draws 
 * a triangle on the terminal using the # character.
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
				col= col + 1;
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
