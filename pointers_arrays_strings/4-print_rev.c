#include "main.h"
/**
 * print_rev - Prints a string in reverse followed by a newline
 * @s: Pointer to the string to be printed
 *
 * Description: This function calculates the length of the string
 *              pointed to by `s`, then prints the characters in
 *              reverse order using the `_putchar` function, followed
 *              by a newline.
 */

void print_rev(char *s)
{
	int count;

	count = 0;
	while (s[count] != '\0')
	{
		count = count + 1;
	}

	while (count > 0)
	{
		count = count - 1;
		_putchar(s[count]);
	}
	_putchar('\n');
}
