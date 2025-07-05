#include "main.h"
/**
 * _strcmp - Compares two strings.
 * @s1: The first string to compare.
 * @s2: The second string to compare.
 *
 * Return: An integer less than, equal to, or greater than zero if s1 is
 * found, respectively, to be less than, to match, or be greater than s2.
 *
 * Description: This function compares the strings s1 and s2 byte by byte.
 * It returns the difference between the first two differing characters.
 * If the strings are identical, it returns 0.
 */
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
