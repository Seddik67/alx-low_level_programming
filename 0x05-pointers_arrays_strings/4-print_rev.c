#include "main.h"

/**
 * print_rev - print reverse of a string
 *
 * @s: input parameter of a string
 *
 * Return: Nothing
 */

void print_rev(char *s)
{
		int i = 0;

		while (s[i])
			i++;

		while (i--)
		{
			_putchar(s[i]);
		}
		_putchar('\n');
}
