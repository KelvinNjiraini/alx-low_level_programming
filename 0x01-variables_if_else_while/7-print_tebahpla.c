#include <stdio.h>

/**
 * main - print letters
 *
 * Description: alphabet in reverse
 *
 * Return: Success (0)
 *
 */
int main(void)
{
	int first = 122;
	int last = 97;

	for (; first >= last; first--)
	{
		putchar(first);
	}
	putchar(10);

	return (0);
}
