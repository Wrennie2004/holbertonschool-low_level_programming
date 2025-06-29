#include "main.h"
#include <stdio.h>

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
