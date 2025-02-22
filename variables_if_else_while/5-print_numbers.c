#include <stdio.h>


/**
 * main - Prints the alphabet in lowercase.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
        char num = '0';

        while (num <= '9')
        {
                putchar(num);
                num = num + 1;
        }
        putchar('\n');

    return (0);
}
