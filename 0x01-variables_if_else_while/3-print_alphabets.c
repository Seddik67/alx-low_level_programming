#include <stdio.h>

/**
 * main -entry level
 *
 * Description: print all alphabet letters and in uppercase
 *
 * Return: always 0 (success)
 */

int main(void)
{
	char ch = 'a';
	char CH = 'A';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}

	while (CH <= 'Z')
	{
		putchar(CH);
		CH++;
	}
	putchar('\n');
	return (0);
}
