#include "main.h"

/**
 * *_memcpy - a function that  copies memory area
 *
 * @n: copies input
 * @src: memory area source
 * @dest: memory area destination
 *
 * Return: pointer to dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int k;

	for (k = 0; k < n; k++)
	{
		dest[k] = src[k];
	}
	return (dest);
}
