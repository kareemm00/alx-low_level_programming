#include "main.h"

/**
 * reverse_array - a function that reverses the content of an arrayofintegers
 *
 * @a: array
 * @n: is the number of elements of the array
*/


void reverse_array(int *a, int n)
{
	int i, j;

	for (i = n - 1; i >= n / 2; i--)
	{
		j = a[n - i - 1];
		a[i] = a[j];
		a[n - i - 1] = a[i];
	}

}
