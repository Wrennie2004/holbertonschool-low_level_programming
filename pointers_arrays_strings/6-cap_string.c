#include "main.h"
/**
 * cap_string - Capitalizes all words of a string.
 * @str: The string to be modified.
 *
 * Return: A pointer to the resulting string `str`.
 *
 * Description: This function capitalizes the first character of each word
 * in the string. Words are separated by delimiters defined in the
 * `sep` array (spaces, tabs, newlines, and some punctuation). It converts
 * lowercase letters following these separators to uppercase.
 */
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
