#include "main.h"
#include <stdio.h>

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
