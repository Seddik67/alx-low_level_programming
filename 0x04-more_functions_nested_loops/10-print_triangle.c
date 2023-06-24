#include "main.h"

/**
 * print_triangle -finction to print a triangle with char #
 *
 * @size: input
 *
 * Return: 0
 */

void print_triangle(int size)
{
	int hight, base;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (hight = 1; hight <= size; hight++)
		{
			for (base = 1; base <= size; base++)
			{
				if ((hight + base) <= size)
					_putchar(' ');
				else
					_putchar('#');
			}
			_putchar('\n');
		}
	}
}
