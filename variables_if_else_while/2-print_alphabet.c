#include <stdio.h>

/**
 * main - Entry point
 *
 *Description: prints alphabet
 *
 * Return: Always 0 (Success)
 */


int main(void)
{
	char c;

	c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c = c + 1;
	}
	putchar('\n');

	return (0);
}
