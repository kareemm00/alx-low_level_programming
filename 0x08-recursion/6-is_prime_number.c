#include "main.h"

/**
 *is_prime_number - a function that that returns 1
 * if the input integer is a prime number, otherwise return 0
 *
 * @n: int value
 * @p: int value
 *
 * Return: value
*/

int prime(int n, int p);
int is_prime_number(int n)
{
	return (prime(n, 2));
}
/**
 * prime - prime number checking
 *
 * @n:checking number
 * @p: value
 *
 * Return: 1 if the input integer is a prime number,
 *otherwise return 0
*/

int prime(int n, int p)
{
	if (p >= n && n > 1)
		return (1);
	else if (n % p == 0 || n <= 1)
		return (0);
	else
		return (prime(n, p + 1));
}
