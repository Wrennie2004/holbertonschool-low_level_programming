#include <stdio.h>

int main(void)
{
	char c;
	c = 'a';

	while (c <= 'e' && c <= 'q' && c <= 'z')
	{
		putchar(c);
		c = c + 1;
	}
	putchar('\n');

	return (0);
}
