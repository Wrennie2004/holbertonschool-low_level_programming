#include "main.h"

/**
 * _atoi - Converts a string into an integer
 *
 * @s: Input string
 * Description:
 * Return: Int
 */

int _atoi(char *s)
{
	int count = 0;
	int sign = 1;
	int start_num = 0;
	int end_num = 0;
	int result = 0;

	while (s[count] != '\0')
	{
		if (s[count] == '-' && start_num == 0)
		{
			sign = sign * -1;
		}

		if (s[count] >= '0' && s[count] <= '9' && end_num == 0)
		{
			start_num = 1;
			result = (result * 10) + (s[count] - '0') * sign;
		}
		else if (!(s[count] >= '0' && s[count] <= '9') && start_num == 1)
		{
			end_num = 1;
		}

		count++;
	}
	return (result);
}
