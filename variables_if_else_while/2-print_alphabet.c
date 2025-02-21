#include <stdio.h>

/**
 * main - entry point
 *
 * return - return 0
 */

int main(void)
{

	char ch = 'a';
	

	while (ch <= 'z')
	{
		putchar(ch);
		ch = ch + 1;
	}
	putchar('\n');
	
	return(0);

}
