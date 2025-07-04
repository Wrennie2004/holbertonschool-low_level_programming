#include "main.h"
/**
 * puts2 - Prints every other character of a string, starting with the first
 * @str: Pointer to the string to be printed
 *
 * Description: This function prints every even-indexed character of the string
 *              pointed to by `str` using the `_putchar` function,
 *              followed by a newline.
 */

void puts2(char *str)
{
	int count;

	count = 0;

	while (str[count] != '\0')
	{
		if (count % 2 == 0)
		{
			_putchar(str[count]);
		}
		count = count + 1;
	}

	_putchar('\n');
}
