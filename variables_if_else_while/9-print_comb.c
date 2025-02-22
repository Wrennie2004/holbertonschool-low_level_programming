#include <stdio.h>

/**
 * main - Prints all the numbers of base 16 in lowercase.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    char num = 0;

    while (num <= 9)
    {
	putchar(num + '0');
	if(num != 9)
	{
		putchar(',');
		putchar(' ');
	}
        num = num + 1;
    }
    
    putchar('\n');
    return (0);
}
