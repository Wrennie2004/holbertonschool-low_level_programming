#include "main.h"

/**
 * Write a function that prints the sign of a number.
 *
 *int print_sign(int n) - prints a sign depending on the value of n.
 *
 */

int print_last_digit(int n)
{
	int a;

	if (n < 0)
		n = -n;

	a = n % 10;

	if (a < 0)
		a = -a;

	_putchar(a + '0');
        return(a);
}

