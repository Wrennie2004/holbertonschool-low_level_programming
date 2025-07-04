#include "main.h"

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
