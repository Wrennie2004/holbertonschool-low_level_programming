#include <stdio.h>
/**
 *main - Entry point
 *
 *Description:a program that prints the lowercase
 *alphabet in reverse, followed by a new line.
 *
 *Return: Always 0 (Sucess)
 */
int main(void)
{
	char c;

	c = 'z';

	while (c >= 'a')
	{
		putchar(c);
		c = c - 1;
	}
	putchar('\n');


	return (0);
}
