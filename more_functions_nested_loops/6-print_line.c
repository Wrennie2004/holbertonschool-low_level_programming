#include <stdio.h>
#include "main.h"
/**
 * print_line - Draws a straight line in the terminal.
 * @n: The number of times the character '_' should be printed.
 *
 * Description: If n is 0 or less, the function prints only a newline.
 */
void print_line(int n)
{
	int count = 0;

	if (n > 0)
	{
		while (count < n)
		{
			_putchar('_');
			count = count + 1;
		}
	}
	_putchar('\n');
}
