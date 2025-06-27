#include "main.h"
/**
 * times_table - check description
 * Description: It prints 9 times table starting with 0
 * Return: Nothing.
 */
void times_table(void)
{
	int row;
	int collum;
	int result;

	for (row = 0; row <= 9; row++)
	{
		for (collum = 0; collum <= 9; collum++)
		{
			result = row * collum;

			if (collum != 0)
			{
				_putchar(',');
				_putchar(' ');

				if (result < 10)
				{
					_putchar(' ');
				}
			}

			if (result < 10)
			{
				_putchar(result + '0');
			}

			else
			{
				 _putchar((result / 10) + '0');
				 _putchar((result % 10) + '0');
			}
		}
	_putchar('\n');
	}
}
