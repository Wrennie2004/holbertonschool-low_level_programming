#include <stdio.h>
/**
 *main - Entry Point
 *
 *Description:a program that prints the alphabet in lowercase
 *and then in uppercase, followed by a new line
 *
 *Return: Always 0 (Success)
 */


int main(void)
{
	char upper;
	char c;

	upper = 'A';
	c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c = c + 1;
	}

	while (upper <= 'Z')
	{
		putchar(upper);
		upper = upper + 1;
	}
	putchar('\n');

	return (0);
}
