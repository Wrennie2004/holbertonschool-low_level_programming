#include "main.h"
#include <stdio.h>

/**
 * more_numbers - Prints numbers from 0 to 14, ten times
 *
 * Return: void
 */
void more_numbers(void)
{
	int count;
	int n;

	for (count = 0; count < 10; count++)
	{
		for (n = 0; n <= 14; n++)
		{
			if (n > 9)
			{
				_putchar(n / 10 + '0');
			}
		_putchar((n % 10) + '0');
		}
		_putchar('\n');
	}
}
