#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - checking the sign
 *
 * Description: COde for checking the sign of numbers
 *
 * Return: Always 0 (Success)
 *
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive\n", i);
	} else if (n == 0)
	{
		printf("%d is zero\n", i);
	} else
	{
		printf("%d is negative\n", i);
	}

	return (0);
}
