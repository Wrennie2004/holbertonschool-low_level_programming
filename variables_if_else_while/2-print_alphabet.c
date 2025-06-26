#include <stdio.h>

int main(void)
{
	char c;

	c = 'a';

	while (c <= 'Z')
	{
		putchar(c);
		c = c + 1;
	}
	putchar('\n');

	return (0);
}
