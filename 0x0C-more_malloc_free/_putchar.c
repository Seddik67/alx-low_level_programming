#include <unistd.h>

/**
 * _putchar - write the character
 * @c: the character to print
 *
 * Return: 0, 1
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
