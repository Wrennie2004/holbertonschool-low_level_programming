#include "main.h"
#include <stdio.h>
/**
 * print_array - Prints n elements of an integer array
 * @a: Pointer to the first element of the array
 * @n: Number of elements to print
 *
 * Description: This function prints the first `n` elements of the
 *              integer array pointed to by `a`, separated by commas
 *              and a space. After printing all elements, it prints
 *              a newline.
 */

void print_array(int *a, int n)
{
	int count;

	count = 0;
	while (count < n)
	{
		printf("%d", a[count]);

		if (count < n - 1)
		{
			printf(", ");
		}
		count = count + 1;
	}

	printf("\n");
}
