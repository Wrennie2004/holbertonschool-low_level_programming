#include "main.h"

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
