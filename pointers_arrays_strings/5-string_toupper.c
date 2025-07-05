#include "main.h"

char *string_toupper(char *s)
{
	int count = 0;
	
	while (s[count] != '\0')
	{
		if (s[count] >= 'a' && s[count] <= 'z')
		{
			s[count] = 'A' + (s[count] - 'a');
		}
	count = count + 1;
	}
	return (s);
}
