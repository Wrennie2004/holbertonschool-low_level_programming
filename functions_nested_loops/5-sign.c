#include "main.h"

/**
 * Write a function that prints the sign of a number.
 *
 *int print_sign(int n) - prints a sign depending on the value of n
 */

int print_sign(int n)
{	
	if (n > 0)
	{
		_putchar('+');
		return(1);
	}
	else if (n ==  0)
	{
		_putchar(48);
		return(0);
	}
	else
	{
		_putchar('-');
		return(-1);
	}
}
