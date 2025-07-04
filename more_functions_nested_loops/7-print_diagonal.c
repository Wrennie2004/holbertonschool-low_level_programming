#include <stdio.h>
#include "main.h"
/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: number of times the character '\' should be printed
 *
 * Return: void
 */
void print_diagonal(int n)
{
	int collum;
	int row;

	row = 0;
	collum = 0;

	if (n > 0)
	{
		while (row < n)
		{
			collum = 0;
			while (collum < row)
			{
				_putchar(' ');
				collum = collum + 1;
			}
		_putchar('\\');
		row = row + 1;
		_putchar('\n');
		}
	}

	else
	{
		_putchar('\n');
	}
}
