#include "main.h"

/**
 * *malloc_checked - a function that allocates memory using malloc
 *
 * @b: integer value
 *
 * Return: pointer to the allocated memory
*/

void *malloc_checked(unsigned int b)
{
	int *memory = malloc(b);

	if (memory == 0)
		exit(98);
	return (memory);
}
