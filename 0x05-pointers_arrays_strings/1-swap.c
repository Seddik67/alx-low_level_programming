#include "main.h"

/**
 * swap_int - swap the vcalues of two integers
 *
 * @a: input 1
 * @b: input 2
 *
 * Return: nothing
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
