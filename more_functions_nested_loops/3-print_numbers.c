#include "main.h"
#include <stdio.h>
/**
 * print_numbers - Prints the numbers from 0 to 9 followed by a new line
 *
 * Return: void
 */
void print_numbers(void)
{
	int n;

	n = '0';

	while (n <= '9')
	{
		_putchar(n);
		n = n + 1;
	}
	_putchar('\n');
}
