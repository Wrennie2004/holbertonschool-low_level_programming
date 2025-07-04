#include "main.h"

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
