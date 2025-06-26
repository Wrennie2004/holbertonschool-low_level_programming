#include <stdio.h>
/**
 *main - Entry point
 *
 *Description: a program that prints all single digit
 *numbers of base 10 starting from 0, followed by a new line.
 *
 *Return: Always 0 (Sucess)
 */


int main(void)
{
	int i;

	i  = 48;

	while (i <= 57)
	{
		putchar(i);
		i = i + 1;
	}
	putchar('\n');


	return (0);
}
