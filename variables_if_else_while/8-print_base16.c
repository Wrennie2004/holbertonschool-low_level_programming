#include <stdio.h>

int main(void)
{
	int num;
	char c;

	num = 48;
	c = 'a';

	while (num <= 57)
	{
		putchar(num);
		num = num + 1;
	}

	while (c <= 'f')
	{
		putchar(c);
		c = c + 1;
	}
	putchar('\n');

	return (0);
}
