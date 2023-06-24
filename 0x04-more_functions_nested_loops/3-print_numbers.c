#include "main.h"

/**
 * print_numbers -print 0 - 9
 *
 * Return: always 0 (success)
 */

void print_numbers(void)
{
	for (int num = 0; num >= 0 && num <= 9; num++)
		_putchar(num + 48);
	_putchar('\n');
}
