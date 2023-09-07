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
	int *ptr, k = 0;

	if (min > max)
		return (NULL);
	ptr = malloc((sizeof(int) * (max - min)) + sizeof(int));
	if (ptr == NULL)
		return (NULL);

}
