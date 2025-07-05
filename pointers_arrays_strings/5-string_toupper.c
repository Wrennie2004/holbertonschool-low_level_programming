#include "main.h"

/**
 * string_toupper - Converts all lowercase letters of a string to uppercase.
 * @s: The string to be converted.
 *
 * Return: A pointer to the resulting string `s`.
 *
 * Description: This function iterates through the string `s`, and for each
 * lowercase letter (a-z), it converts it to the corresponding uppercase
 * letter (A-Z) by adjusting its ASCII value.
 */
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
