#include <stdio.h>

/**
 * main - Entry point
 * Discription - programme to print number from 0 to 10
 * Return: 0
 */

int main(void)
{
	int i;

	for (i = 0; i <= 10; i++)
	{
		putchar(i + '0');
	}
	putchar('\n');
	return (0);
}
