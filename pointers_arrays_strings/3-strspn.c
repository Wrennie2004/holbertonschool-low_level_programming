#include "main.h"

unsigned int _strspn(char *s, char *accept)
{
	unsigned int start;
	unsigned int index;

	for(start = 0; s[start] != '\0'; start++)
	{

		for(index = 0; accept[index] != '\0'; index++)
		{
			if(s[start] == accept[index])
			{
				break;
			}
		}

		if(accept[index] == '\0')
		{
			return(start);
		}
	}
	return start;
}
