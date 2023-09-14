#include "function_pointers.h"

/**
 * int_index - a function that searches for an integer.
 *
 * @array: array
 * @size: array size
 * @cmp: cmp function
 *
 * Return: int
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int k = 0;

	if (array && size && cmp)
		while (k < size)
		{
			if (cmp(array[k]))
				return (k);
			k++;
		}
	return (-1);
}
