#include "main.h"

/**
 * _islower - A function that checks for lowercase character
 *
 * @c: checks the character
 *
 * Return: Returns 1 if 'c' is lowercase, Returns 0 otherwise
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
		return (0);
}
