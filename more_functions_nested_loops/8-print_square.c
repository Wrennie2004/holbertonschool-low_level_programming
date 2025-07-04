#include "main.h"
#include <stdio.h>

void print_square(int size)
{
	int collum;
	int row;

	row = 0;
	collum = 0;

	if (size > 0)
	{
		while (row < size)
		{
			collum = 0;
			while (collum < size)
			{
				_putchar('#');
				collum = collum + 1;
			}
		row = row + 1;
		_putchar('\n');
		}
	}

	else
	{
		_putchar('\n');
	}
}
