#include "main.h"

char *_strcpy(char *dest, char *src)
{
	int count;

	count = 0;
	while (src[count] != '\0')
	{
		dest[count] = src[count];
		count = count + 1;
	}

	dest[count] = '\0';

	return (dest);
}
