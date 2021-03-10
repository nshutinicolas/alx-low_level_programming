#include <stddef.h>

/**
 * int_index - function that searches for an inters
 * @array: array to search from
 * @size: size of the array
 * @cmp: function to compare from
 * Return: found interger or -1 if none
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (*(cmp(array + i)))
			return (i);
	}
	return (-1);
}
