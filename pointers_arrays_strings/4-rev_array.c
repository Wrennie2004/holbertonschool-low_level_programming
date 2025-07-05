#include "main.h"
/**
 * reverse_array - Reverses the content of an array of integers.
 * @a: Pointer to the first element of the array.
 * @n: Number of elements in the array.
 *
 * Description: This function reverses the order of elements in the integer
 * array pointed to by `a`. It swaps the first element with the last, the
 * second with the second last, and so forth, moving inward until all
 * elements have been reversed.
 */
void reverse_array(int *a, int n)
{
	int temp;
	int count = 0;

	while (count < (n / 2))
	{
		temp = a[count];
		a[count] = a[n - count - 1];
		a[n - count - 1] = temp;
		count = count + 1;
	}
}
