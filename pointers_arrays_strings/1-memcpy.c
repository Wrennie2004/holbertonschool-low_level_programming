#include "main.h"

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int count = 0;

	while (src[count] != '\0' && count < n)
	{
		dest[count] = src[count];
		count = count + 1;
	}

	while (count < n)
	{
		dest[count] = '\0';
		count = count + 1;
	}

	return (dest);
}
