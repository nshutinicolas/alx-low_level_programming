#include <stddef.h>
#include <stdio.h>

/**
 * array_iterator - function that executes a function given as a parameter
 * @array: array to execute on
 * @size: size of the array
 * @action: function to execute
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array != NULL && action != NULL)
	{
		for (i = 0; i < size; i++)
			action(*(array + i));
	}
}
