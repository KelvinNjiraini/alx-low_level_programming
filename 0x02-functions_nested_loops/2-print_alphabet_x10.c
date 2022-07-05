#include "main.h"

/**
 * print_alphabet_x10 - prints alphabet
 *
 * Description: Prints alphabet ten times
 *
 * Return: 0 for successs
 *
 */
void print_alphabet_x10(void)
{
	int i = 0;

	while (i < 10)
	{
		int alphabet = 97;

		while (alphabet <= 122)
		{
			_putchar(alphabet);
			alphabet++;
		}
		_putchar('\n');
		i++;
	}
}
