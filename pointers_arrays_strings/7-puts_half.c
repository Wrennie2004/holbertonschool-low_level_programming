#include "main.h"
/**
 * puts_half - Prints the second half of a string, followed by a newline
 * @str: Pointer to the string to be printed
 *
 * Description: This function calculates the length of the string `str`,
 *              then prints the last half of the string. If the length is odd,
 *              it prints the second half including the middle character.
 */
void puts_half(char *str)
{
	int count;
	int half;

	count = 0;

	while (str[count] != '\0')
	{
		count = count + 1;
	}

	if (count % 2 == 0)
	{
		half = count / 2;
	}

	else
	{
		half = (count + 1) / 2;
	}

	while (str[half] != '\0')
	{
		_putchar(str[half]);
		half = half + 1;
	}

	_putchar('\n');
}
