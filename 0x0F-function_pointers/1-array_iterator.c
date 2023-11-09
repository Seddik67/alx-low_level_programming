#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - excecutes function of array
 * @array: the array
 * @size: size of array
 * @action: function to perform on each elemnt of array
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;
	for ( i = 0; i < size; i++)
		action(array[i]);
}
