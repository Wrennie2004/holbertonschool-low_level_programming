#include "main.h"
/**
 * print_sign - Prints the sign of a number
 * @n: The number to check
 *
 * Return: 1 if n is greater than 0,
 *         0 if n is zero,
 *        -1 if n is less than 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n ==  0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
