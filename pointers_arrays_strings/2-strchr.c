#include "main.h"

char *_strchr(char *s, char c)
{
	int count = 0;

	while (s[count] != '\0')
	{
		if (s[count] == c)
		{
			return (&s[count]);
		}
		
		count++;
	}

	if (c == '\0')
	{
		return (&s[count]);
	}

	return ('\0');
}
