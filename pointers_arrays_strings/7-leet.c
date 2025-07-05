#include "main.h"
/**
 * leet - Encodes a string into 1337 (leet) speak.
 * @str: The string to be encoded.
 *
 * Return: A pointer to the resulting string `str`.
 *
 * Description: This function replaces certain letters in the input string
 * with corresponding leet speak digits. Specifically, it converts
 * 'a' or 'A' to '4', 'e' or 'E' to '3', 'o' or 'O' to '0', 't' or 'T' to '7',
 * and 'l' or 'L' to '1'.
 */
char *leet(char *str)
{
	int n = 0, i = 0; /* Pointers */
	char alpha[] = "aAeEoOtTlL";
	char leet[] = "4433007711";

	while (str[n] != '\0')
	{
		i = 0;
		while (alpha[i] != '\0')
		{
			if (str[n] == alpha[i])
			{
				str[n] = leet[i];
			}
			i++;
		}
		n++;
	}
	return (str);
}
