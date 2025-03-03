#include "main.h"
/**
 *
 * void print_line(int n)- Write a function that draws a straight line in the terminal.
 *
 */

void print_line(int n)
{
	
	int i;

	if(n > 0)
	{
		for (i = 0; i < n)
		{
			_putchar('_');
			i = i + 1;
		}
	}	
	_putchar('\n');
}
