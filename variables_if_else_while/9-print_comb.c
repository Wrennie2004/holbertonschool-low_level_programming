#include <stdio.h>
/**
 *main - Entry point
 *
 *Description:a program that prints
 *all possible combinations of single-digit numbers.
 *
 *Return: Always 0 (Sucess)
 */
int main(void)
{
	char num;

	num = 0;

	while (num <= 9)
	{
		putchar(num + '0');
		if (num != 9)
		{
			putchar(',');
			putchar(' ');
		}
		num = num + 1;
	}
	putchar('\n');
	return (0);
}
