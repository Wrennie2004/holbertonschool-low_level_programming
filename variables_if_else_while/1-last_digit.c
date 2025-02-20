#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Description: This program generates a random number and prints whether
 * the number is positive, negative, or zero.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{

	int last_digit;
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	
	last_digit = n % 10;
	if (n < 0 && n != 0)
	{
		last_digit = -last_digit;
	}

	printf("last digit of %d is %d and is ", n, last_digit);

	if (n > 5)
	{
		printf("greater than 5\n");
	}
	else if (n == 0)
	{
		printf("0\n");
	}
	else
	{
		printf("less than 6 and not 0\n");
	}
	return (0);
}
