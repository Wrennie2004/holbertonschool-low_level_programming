#include "main.h"
/*
 * void print_most_numbers(void): Write a function that prints the numbers, from 0 to 9, followed by a new line.
 */

void print_most_numbers(void)
{
        int n = 0;

        for(n = 0; n <= 9;)
	{
		if(n != 2 && n !=4)
		{
			_putchar(n + '0');
		}
	n = n + 1;
	}
	_putchar('\n');
}
