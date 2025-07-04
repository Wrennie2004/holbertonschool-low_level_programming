#include "main.h"

void rev_string(char *s)
{
	int count;
	int start;
	int end;
	char temp;

	count = 0;
	while (s[count] != '\0')
        {
                count = count + 1;
        }

	start = 0;
	end = count - 1;
	while (start < end)
	{
		temp = s[start];
		s[start] = s[end];
		s[end] = temp;
		start = start + 1;
		end = end - 1;
	}
}
