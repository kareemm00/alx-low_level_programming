#include "main.h"

/**
 * flip_bits -a function that returns the number of bits you would
 * need to flip to get from one number to another
 *
 * @n: num1.
 * @m: num2.
 *
 * Return: bits.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int bit;

	for (bit = 0; n || m; n >>= 1, m >>= 1)
	{
		if ((n & 1) != (m & 1))
			bit++;
	}

	return (bit);
}
