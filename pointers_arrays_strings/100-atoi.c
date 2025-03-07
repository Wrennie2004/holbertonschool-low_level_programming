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

		while(s[count] >= 'a' && s[count] <= 'z' || s[count] >= 'A' && s[count] <= 'Z')
		{
			//something here so it ends and doesnt print after letters...
		}
	}
	return(result * sign);
}
