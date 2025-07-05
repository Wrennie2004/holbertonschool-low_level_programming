#include "main.h"

char *cap_string(char *str)
{
	int acount = 0;
	int bcount = 0;
	char sep[] = " \t\n,;.!?\"(){}";

	if (str[acount] >= 'a' && str[acount] <= 'z')
		str[acount] = 'A' + (str[acount] - 'a');

	while (str[acount] != '\0')
	{
		if (str[acount] >= 'a' && str[acount] <= 'z')
		{
			bcount = 0;
			while (sep[bcount] != '\0')
			{
				if (str[acount - 1] == sep[bcount])
					str[acount] = 'A' + (str[acount] - 'a');
				bcount++;
			}
		}
		acount++;
	}
	return (str);
}
