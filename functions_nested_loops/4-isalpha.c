#include "main.h"

/**
 * Write a function that checks for lowercase character.
 * Return : Always return 0
 */

int _isalpha(int c)
{
        return((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
