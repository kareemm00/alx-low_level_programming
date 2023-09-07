#include "main.h"
#include <stdlib.h>

/**
 * array_range - a function that creates an array of integers
 *
 * @min: minimum
 * @max: maximum
 *
 * Return: pointer to the newly created array
*/

int *array_range(int min, int max)
{
	int *ptr;

	if (min > max)
		return (0);
	ptr = malloc((sizeof(int) * (max - min)) + sizeof(int));
	if (ptr == 0)
		return (0);

}
