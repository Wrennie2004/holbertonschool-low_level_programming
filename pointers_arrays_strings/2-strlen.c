#include "main.h"

/*
 *i
 */

int _strlen(char *s)
{

	int count;

	count = 0;
	while(s[count] != '\0')
	{
		count = count + 1;
	}
	return(count);
}
