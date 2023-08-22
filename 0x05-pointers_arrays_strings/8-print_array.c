#include "main.h"

/**
 * print_array - a function that prints n elements of an array of integers
 *
 * @a: string parameter
 * @n: is the number of elements of the array to be printed
*/

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i != (n - 1))
		{
			printf("%i, ", a[i]);
		}
		else
			printf("%i", a[i]);
	}
	printf("\n");
}
