#include "main.h"

/**
 * print_alphabet- prints the alphabets ;)
 *
 * Description: prints alphabets
 *
 * Return: return 0 for success
 */

void print_alphabet(void)
{
	int first = 97;
	int last = 122;

	for (; first <= last; first++)
	{
		_putchar(first);
	}
	_putchar('\n');
}
