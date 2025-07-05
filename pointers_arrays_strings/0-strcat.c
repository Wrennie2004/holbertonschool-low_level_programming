#include "main.h"
/**
 * _strcat - Concatenates two strings.
 * @dest: The destination string to which `src` will be appended.
 * @src: The source string to append to `dest`.
 *
 * Return: A pointer to the resulting string `dest`.
 *
 * Description: This function appends the `src` string to the end of the
 * `dest` string, overwriting the null byte at the end of `dest`,
 * and then adds a terminating null byte.
 */
char *_strcat(char *dest, char *src)
{
	int scount = 0;
	int dcount = 0;


	while (dest[dcount] != '\0')
	{
		dcount = dcount + 1;
	}

	while (src[scount] != '\0')
	{
		dest[dcount] = src[scount];
		scount = scount + 1;
		dcount = dcount + 1;
	}

	dest[dcount] = '\0';
	return dest;
}


