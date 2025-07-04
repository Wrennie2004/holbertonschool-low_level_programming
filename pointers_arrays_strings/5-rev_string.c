#include "main.h"
/**
 * rev_string - Reverses a string in place
 * @s: Pointer to the string to be reversed
 *
 * Description: This function reverses the string pointed to by `s`
 *              by swapping characters from the start and end moving
 *              towards the center until the entire string is reversed.
 */

void rev_string(char *s)
{
	int count;
	int start;
	int end;
	char temp;

	count = 0;
	while (s[count] != '\0')
	{
		count = count + 1;
	}

	start = 0;
	end = count - 1;
	while (start < end)
	{
		temp = s[start];
		s[start] = s[end];
		s[end] = temp;
		start = start + 1;
		end = end - 1;
	}
}
