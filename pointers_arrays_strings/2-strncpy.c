#include "main.h"

/**
 * _strncpy - Copies a string, using at most n bytes from src.
 * @dest: The destination buffer where the string will be copied.
 * @src: The source string to copy from.
 * @n: The maximum number of bytes to copy from src.
 *
 * Return: A pointer to the resulting string dest.
 *
 * Description: This function copies up to n characters from the string src
 * to dest. If src is less than n characters long, the remainder of dest
 * is filled with null bytes ('\0'). If src is longer than or equal to n,
 * no null terminator is added at the end of dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int count = 0;


	while (count < n && src[count] != '\0')
	{
		dest[count] = src[count];
		count = count + 1;
	}
	
	while (count < n)
	{
		dest[count] = '\0';
		count = count + 1;
	}

	return (dest);
}
