#include "main.h"
/**
 * swap_int - Swaps the values of two integers
 * @a: Pointer to the first integer
 * @b: Pointer to the second integer
 *
 * Description: This function swaps the values stored at the
 *              addresses pointed to by `a` and `b`.
 */

void swap_int(int *a, int *b)
{
	int n = *a;

	*a = *b;
	*b = n;
}
