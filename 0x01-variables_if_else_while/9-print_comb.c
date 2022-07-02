#include <stdio.h>

/**
 * main - combinations
 *
 * Description: working on numbers combinations
 *
 * Return: success (0)
 *
 */
int main(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		putchar(i);

		if (i != 57)
		{
			putchar(44);
			putchar(32);
		}
	}
	putchar(10);

	return (0);
}
