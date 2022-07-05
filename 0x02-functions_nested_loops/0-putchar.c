#include "main.h"

/**
 * main - simple putchar declaration
 *
 * Description: Putchar function in place
 *
 * Return: 0 for success
 *
 */
int main(void)
{
	char text[] = "_putchar";
	int i = 0;

	while (text[i] != 0)
	{
		_putchar(text[i]);
		i++;
	}
	putchar('\n');

	return (0);
}
