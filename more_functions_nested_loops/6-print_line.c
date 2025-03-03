#include "main.h"
/**
 *
 * void print_line(int n)- Write a function that draws a straight line in the terminal.
 *
 */

void print_line(int n)
{
	int i;
	i = 0;

	if(n > 0)
	{
		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
	}	
	_putchar('\n');
}
