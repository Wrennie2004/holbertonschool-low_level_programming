#include "main.h"

char *_strcat(char *dest, char *src)
{
	int dcount = 0;
	int scount = 0;

	while(dest[dcount] != '\0')
	{
		dcount = dcount + 1;
	}	
	
	while(src[scount] != '\0')
	{
		dest[dcount] = src[scount];
		dcount = dcount + 1;
		scount = scount + 1;
	}
	
	dest[dcount] = '\0';
	return dest;

}
