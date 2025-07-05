#include "main.h"

int _strcmp(char *s1, char *s2)
{
	int result = 0;
	int count = 0;

	while (s1[count] != '\0' && s2[count] != '\0')
	{
		if (s1[count] < s2[count])
			return (result = s1[count] - s2[count]);

		if (s1[count] > s2[count])
			return (result = s1[count] - s2[count]);

		count = count + 1;
	}
	return (result);
}
