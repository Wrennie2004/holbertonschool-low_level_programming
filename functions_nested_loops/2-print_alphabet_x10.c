#include "main.h"
/**
 * print_alphabet_x10 - a function that prints 10 times the alphabet
 * in lowercase, followed by a new line.
 */
void print_alphabet_x10(void)
{
	char c;
	int i;

	i = 0;

	while (i < 10)
	{
		c = 'a';
		while (c <= 'z')
		{
			_putchar(c);
			c = c + 1;
		}
	i = i + 1;
	_putchar('\n');
	}
}
