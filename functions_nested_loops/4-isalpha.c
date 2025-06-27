#include "main.h"
/**
 * Description: Write a function that checks for lowercase character. 
 * Return: Always 0 (Sucess)
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
