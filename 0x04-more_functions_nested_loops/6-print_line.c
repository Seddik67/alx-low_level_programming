#include "main.h"

/**
 * print_line -print a straight line
 *
 * @n: input
 */

void print_line(int n)
{
	int m;

	if (n <= 0)
		_putchar('\n');
	else
		for (m = 1; m <= n; m++)
			_putchar('_');
		_putchar('\n');
	}
}
