#include "main.h"

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int count = 0;

	while (count < n)
	{
		s[count] = b;
		count = count + 1;
	}

	return (s);
}
