#include "main.h"

/**
 * print_alphabet -function to print from a to z in lowercase
 */

void print_alphabet(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		_putchar(ch);
	_putchar('\n');
}
