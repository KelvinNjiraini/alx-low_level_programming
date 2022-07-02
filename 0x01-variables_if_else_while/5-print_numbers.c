#include <stdio.h>

/**
 * main - printing out digits from 0 to 9
 *
 * Description: Printing numbers
 *
 * Return: always 0 for success
 *
 */
int main(void)
{
	int num = 0;

	for (; num <= 9; num++)
	{
		printf("%d", num);
	}
	printf("\n");

	return (0);
}
