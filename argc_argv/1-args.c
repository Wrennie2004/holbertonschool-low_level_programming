#include <stdio.h>


int main(int argc, char *argv[])
{
	int num = argc;
	int i = 0;

	while(argv[0][i] != '\0')
	{
		i++;
	}

	if(num == 0)
	{
		putchar('0');
		putchar('\n');
	}
	else
	{
		if(num == 0)
		{
			putchar('0');
			putchar('\n');
		}

		else
		{
			if(num >= 10)
			{
				putchar((num /10)  + '0');
			}

			putchar((num % 10) + '0');
		}
	}
	putchar('\n');
	return(0);
}
