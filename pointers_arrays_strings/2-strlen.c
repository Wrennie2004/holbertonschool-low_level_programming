/**
 * _strlen - Returns the length of a string
 * @s: Pointer to the string
 *
 * Description: This function counts the number of characters
 *              in the string pointed to by `s`, not including
 *              the terminating null byte '\0'.
 *
 * Return: The length of the string as an integer
 */
#include "main.h"

int _strlen(char *s)
{
	int count;

	count = 0;
	while (s[count] != '\0')
	{
		count = count + 1;
	}

	return (count);
}
