#include "main.h"

/**
 * **alloc_grid - a function that returns a pointer
 *to a 2 dimensional array of integers.
 *
 * @width: width
 * @height: height
 *
 * Return: f width or height is 0 or negative, return NULL
*/

int **alloc_grid(int width, int height)
{
	int k, j, **ptr;

	ptr = malloc(sizeof(*ptr) * height);

	if (width <= 0 || height <= 0 || ptr == 0)
	{
		return (NULL);
	}
	else
	{
		for (k = 0; k < height; k++)
		{
			ptr[k] = malloc(sizeof(**ptr) * width);
			if (ptr[k] == 0)
			{
				while (k--)
					free(ptr[k]);
				free(ptr);
				return (NULL);
			}
			for (j = 0; j < width; j++)
				ptr[k][j] = 0;
		}
	}
	return (ptr);
}
