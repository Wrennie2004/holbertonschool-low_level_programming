#include "main.h"
/**
 * _puts - Prints a string followed by a newline
 * @str: Pointer to the string to be printed
 *
 * Description: This function prints each character of the string
 *              pointed to by `str` using the `_putchar` function,
 *              followed by a newline.
 */
void _puts(char *str)
{
	int count;

	count = 0;
	while (str[count] != '\0')
	{
		_putchar(str[count]);
		count = count + 1;
	}
	_putchar('\n');
}
