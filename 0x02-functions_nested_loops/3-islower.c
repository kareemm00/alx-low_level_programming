#include "main.h"

/**
 *  int _islower(int c) - A function that checks for lowercase character
 *
 * Return: Returns 1 if c is lowercase, Returns 0 otherwise
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
