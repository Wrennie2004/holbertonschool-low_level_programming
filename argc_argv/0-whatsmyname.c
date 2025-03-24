#include <stdio.h>
#include "main.h"

int main(int argc, char *argv[])
{
	int i;

	if (argc > 0)
	{
		i = 0;

		while (argv[0][i] != '\0')
    		{
			putchar(argv[0][i]);
        		i++;
		}

	putchar('\n');

	}
	return(0);
}
