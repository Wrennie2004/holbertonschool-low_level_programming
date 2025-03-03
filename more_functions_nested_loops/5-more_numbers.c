#include "main.h"
/*
 *
 * void more_numbers(void): Write a function that prints 10 times the numbers, from 0 to 14, followed by a new line.
 *
 */

void more_numbers(void)
{
        int n;
	int i;

	for(i= 0; i < 10;)
	{
		for(n = 0; n <= 14;)
		{
			if(n > 9)
			{
				_putchar((n / 10) + '0');
			}
		_putchar((n % 10) + '0');
		n = n + 1;
		}
	i = i + 1;
	_putchar('\n');
	}
}
