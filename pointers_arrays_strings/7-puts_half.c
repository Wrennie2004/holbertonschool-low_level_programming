#include "main.h"

void puts_half(char *str)
{
        int count = 0;
	int start;

        while(str[count] != '\0')
        {
                count = count + 1;
        }

	if(count % 2 == 0)
	{
		start = count / 2;
	}

	else
	{
		start = (count + 1) / 2;
	}

	while(str[start] != '\0')
	{
		_putchar(str[start]);
		start = start + 1;
	}
        _putchar('\n');
}
