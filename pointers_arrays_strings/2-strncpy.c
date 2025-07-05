#include "main.h"

char *_strncpy(char *dest, char *src, int n)
{
	int count = 0;


	while (count < n && src[count] != '\0')
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
