#include "main.h"
/*
 * void print_diagonal(int n) - Write a function that draws 
 * a diagonal line on the terminal.
 */

void print_diagonal(int n)
{
	int row = 0;
	int collum = 0;

        if(n > 0)
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
		_putchar('\n');
}
