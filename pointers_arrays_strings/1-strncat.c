#include "main.h"

char *_strncat(char *dest, char *src, int n)
{
	int dcount = 0;
	int scount = 0;

	while (dest[dcount] != '\0')
	{
		dcount = dcount + 1;
	}

	while (scount < n && src[scount] != '\0')
	{

			dest[dcount] = src[scount];
			dcount = dcount + 1;
			scount  = scount + 1;
	}

	dest[dcount] = '\0';
	return dest;
}
