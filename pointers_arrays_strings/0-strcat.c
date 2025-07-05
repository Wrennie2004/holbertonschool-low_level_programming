#include "main.h"

char *_strcat(char *dest, char *src)
{
	int scount = 0;
	int dcount = 0;


	while (dest[dcount] != '\0')
	{
		dcount = dcount + 1;
	}

	while (src[scount] != '\0')
	{
		dest[dcount] = src[scount];
		scount = scount + 1;
		dcount = dcount + 1;
	}

	dest[dcount] = '\0';
	return dest;
}


