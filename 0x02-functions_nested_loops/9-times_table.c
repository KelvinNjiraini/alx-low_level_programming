#include "main.h"

/**
 * times_table - prints the 9 times table
 *
 * Description: prints the 9 times table
 *
 * Return: void
 */

void times_table(void)
{
	int i = 0, j;
	
	while (i <= 9)
	{
		j = 0;
		while (j <= 9)
		{
			int num = i * j;
			if (j > 0)
			{
				_putchar(',');
				_putchar(' ');
			}
			if (num >= 10)
			{
				_putchar(num / 10 + '0');
				_putchar(num % 10 + '0');
			}
			else
			{
				if (j >= 2)
					_putchar(' ');
				if (j == 1)
					_putchar(' ');
				_putchar(num + '0');
			}
			j++;
		}
		_putchar('\n');
		i++;
	}
}
