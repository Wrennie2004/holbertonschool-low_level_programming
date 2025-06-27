#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints all natural numbers from n to 98
 *
 * @n: starting point
 *
 * Return: returns nothing
 *
 */

void print_to_98(int n)
{
	if (n < 98)
	{
		for (; n < 98; n = n + 1)
		{
			printf("%d, ", n);
		}
	}
	else
	{
		for (; n > 98; n = n - 1)
		{
			printf("%d, ", n);
		}
	}
	printf("98\n");
}
