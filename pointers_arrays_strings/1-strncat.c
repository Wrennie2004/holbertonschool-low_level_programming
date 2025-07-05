#include "main.h"
/**
 * _strncat - Concatenates two strings using at most n bytes from src.
 * @dest: The destination string to which `src` will be appended.
 * @src: The source string to append to `dest`.
 * @n: The maximum number of bytes to append from `src`.
 *
 * Return: A pointer to the resulting string `dest`.
 *
 * Description: This function appends at most `n` characters from the `src`
 * string to the end of `dest`, and adds a null terminator. If `src` is
 * shorter than `n`, the entire string is appended.
 */
char *_strncat(char *dest, char *src, int n)
{
	int dcount = 0;
	int scount = 0;

	while (dest[dcount] != '\0')
	{
		dcount = dcount + 1;
	}

	while (scount < n && src[scount] != '\0')
	{
		dest[dcount] = src[scount];
		dcount = dcount + 1;
		scount  = scount + 1;
	}

	dest[dcount] = '\0';
	return (dest);
}
