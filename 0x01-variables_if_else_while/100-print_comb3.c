#include <stdio.h>

/**
 * main - printing combination
 *
 * Description: prints the combination of two numbers
 *
 * Return: success 0
 *
 */
int main(void)
{
	int i;
	int j;
	int numPrinted = 0;

	for (i = 48; i <= 56; i++)
	{
		for (j = 48; j <= 57; j++)
		{
			if (i != j)
			{
				int otherPerm = (10 * j) + i;
				int current = (10 * i) + j;

				if (current < otherPerm)
				{
					putchar(44);
					putchar(32);
				}

				putchar(i);
				putchar(j);
				numPrinted++;
			}
		}
	}
	putchar(10);

	return (0);
}
