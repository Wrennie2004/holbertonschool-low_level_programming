#include "main.h"

void rev_string(char *s)
{
        int count = 0;
	int start;
	int end;
	char temp;

        while(s[count] != '\0')
        {
                count = count + 1;
        }

	start = 0;
	end = count - 1;
	while(start < end)
        {
                temp = s[start];
		s[start] = s[end];
		s[end] = temp;
                
		start++;
		end--;
        }
}
