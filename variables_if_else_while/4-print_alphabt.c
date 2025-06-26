#include <stdio.h>
/**
 *main - Entry point
 *
 *Description: Write a program that prints the alphabet in lowercase
 *followed by a new line.
 *
 *Return: Always 0 (Sucess)
 */
int main(void)
{
	char c;

	c = 'a';

	while (c <= 'z')
	{
		if (c != 'q' && c != 'e')
		putchar(c);
		c = c + 1;
	}
	putchar('\n');

	return (0);
}
