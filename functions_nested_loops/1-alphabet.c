#include "main.h"

/**
 * main - Entry point.
 * Description: function that prints the alphabet, in lowercase, followed by a new line.
 * Return: Always 0 (Success)
 */

void print_alphabet(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		_putchar(ch);
		ch = ch + 1;
	}
	_putchar('\n');
}
