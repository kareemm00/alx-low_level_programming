#include "main.h"
#include <stdio.h>

/**
 * _calloc - a function that allocates memory for an array, using malloc
 *
 * @nmemb: array size
 * @size:size
 *
 * Return: ptr
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int k = 0, len = 0;
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (0);
	len = nmemb * size;
	ptr = malloc(len);

	if (ptr == 0)
		return (0);
	while (k < len)
	{
		ptr[k] = 0;
		k++;
	}
	return (ptr);
}
