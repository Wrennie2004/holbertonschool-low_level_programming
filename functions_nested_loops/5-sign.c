#include "main.h"

/**
 * Write a function that checks for lowercase character.
 * Return : Always return 0
 */

int print_sign(int n)
{	
	if (n > 0)
	{
		_putchar('+');
		return(1);
	}
	else if (n < 0)
	{
		_putchar(48);
		return(0);
	}
	else if (n == 0)
	{
		_putchar('-');
	}
	return(-1);
}
