#include "main.h"
#include <stdlib.h>

/**
 * *array_range - a function that creates an array of integers
 *
 * @min: minimum
 * @max: maximum
 *
 * Return: pointer to the newly created array
*/

int *array_range(int min, int max)
{
	int *ptr, k, l;

	if (min > max)
		return (0);
	l = max - min + 1;

	ptr = malloc(sizeof(int) * l);

	if (!ptr)
	{
		return (0);
	}
	for (k = 0; k < l; k++)
	{
		ptr[k] = min++;
	}
	return (ptr);




}
