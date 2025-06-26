#include <stdio.h>

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
