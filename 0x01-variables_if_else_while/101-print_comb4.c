#include <stdio.h>

/**
 * main - three digit combo
 *
 * Description: combining 3 digits
 *
 * Return: Success, 0
 *
 */
int main(void)
{
	int n, m, l;

	for (n = 48; n < 58; n++)
	{
		for (m = 49; m < 58; m++)
		{
			for (l = 50; l < 58; l++)
			{
				if (l > m && m > n)
				{
					putchar(m);
					putchar(n);
					putchar(l);
					if (n != 55 || m != 56)
					{
						putchar(",");
						putchar(" ");
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
