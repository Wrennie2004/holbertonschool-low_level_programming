#include "main.h"

void puts2(char *str)
{
        int count = 0;

        while(str[count] != '\0')
        {
                if(count % 2 == 0)
		{
			_putchar(str[count]);
		}

		count = count + 1;

        }
        _putchar('\n');
}
