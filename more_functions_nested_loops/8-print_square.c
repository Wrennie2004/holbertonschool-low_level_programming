#include "main.h"
/*
 *
 *Write a function that prints a square, followed by a new line.
 *
 */
void print_square(int size)
{
	int row = 0;
	int collum = 0;

	if(size > 0)
        {
		row = 0;
		while(row < size)
		{
			collum = 0;
			while(collum < size)
			{
				_putchar('#');
				collum = collum + 1;
			}
		_putchar('\n');
		row = row + 1;
		}
	}
	else
		_putchar('\n');
}
