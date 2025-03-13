#include "main.h"

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	while(i < n)
	{
		s[i] = b;
		s[i]++
	}

	return s;
}
