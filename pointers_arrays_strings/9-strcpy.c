#include "main.h"
/**
 * _strcpy - Copies a string from src to dest
 * @dest: Pointer to the destination buffer
 * @src: Pointer to the source string
 *
 * Description: This function copies the string pointed to by `src`,
 *              including the terminating null byte `\0`, into the
 *              buffer pointed to by `dest`.
 *
 * Return: Pointer to the destination string `dest`
 */
char *_strcpy(char *dest, char *src)
{
	int count;

	count = 0;
	while (src[count] != '\0')
	{
		dest[count] = src[count];
		count = count + 1;
	}

	dest[count] = '\0';

	return (dest);
}
