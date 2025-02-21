#include <stdio.h>

/**
* main - Prints the alphabet in lowercase.
*
* Return: Always 0 (Success)
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

	return (0);
}
