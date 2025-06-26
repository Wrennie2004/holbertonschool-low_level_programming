#include <stdio.h>
/**
 *main - Entry point
 *
 *Description:a program that prints all single digit
 *numbers of base 10 starting from 0, followed by a new line.
 *
 *Return: Always 0 (Sucess)
 */
int main(void)
{
	char num;

	num = '0';

	while (num <= '9')
	{
		putchar(num);
		num = num + 1;
	}
	putchar('\n');
	return (0);
}
