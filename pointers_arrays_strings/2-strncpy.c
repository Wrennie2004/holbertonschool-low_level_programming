#include "main.h"

char *_strncpy(char *dest, char *src, int n)
{
        int i = 0;

	while(i < n && src[i] != '\0')
        {
                dest[i] = src[i];
		 i = i + 1;
        }

	while(i < n)
        {
                dest[i] = '\0';
                i = i + 1;
        }

	return dest;

}
