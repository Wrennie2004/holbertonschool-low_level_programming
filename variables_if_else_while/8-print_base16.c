#include <stdio.h>

/**
 * main - Prints all the numbers of base 16 in lowercase.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    char num = 0;

    while (num < 10)
    {
        putchar(num + '0');
        num = num + 1;
    }

    num = 'a';
    while (num <= 'f')
    {
        putchar(num);
        num = num + 1;
    }
    putchar('\n');

    return (0);
}
