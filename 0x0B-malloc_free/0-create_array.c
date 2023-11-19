#include "main.h"

/**
 * create_array - creates an array of charcters
 * @size: size of the array
 * @c: char to initiallize
 * Return: n
 */

char *create_array(unsigned int size, char c)
{
	char *n = malloc(size);

	if (n == 0 || size == 0)
		return (0);

	while (size--)
		n[size] = c;

	return (n);
}
