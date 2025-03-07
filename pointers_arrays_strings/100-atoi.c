#include "main.h"

int _atoi(char *s)
{
	int count = 0;
	int sign = 1;
	int result = 0;

	while(s[count] != '\0')
	{
		while (s[count] != '\0' && (s[count] < '0' || s[count] > '9') && s[count] != '+' && s[count] != '-')
		{
			count++;
		}	
		
		while(s[count] == '+' || s[count] == '-')
		{

			if(s[count] == '-')
			{
				sign = -sign;
			}
			count++;
		}

		while(s[count] >= '0' && s[count] <= '9')
		{
			result = result * 10 + (s[count] - '0');
			count++;
		}
	}
	return(result * sign);
}
