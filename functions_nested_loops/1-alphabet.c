#include <stdio.h>
#include "main.h"
/**
 *print_alphabet - a function that prints the alphabet
 *in lowercase, followed by a new line.
 */
void print_alphabet(void)
{
	char c;

	c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c = c + 1;
	}
	_putchar('\n');
}
