#include "main.h"
/**
 * void print_numbers(void) - a function that prints the numbers, from 0 to 9, followed by a new line.
 *
 * Return: Always 0.
 */
void print_numbers(void)
{
	int n = 0;

	while(n <= 9)
	{
		_putchar(n + '0');
		n = n + 1;
	}
	_putchar('\n');
}
