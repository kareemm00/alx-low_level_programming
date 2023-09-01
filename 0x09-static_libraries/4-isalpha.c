#include "main.h"

/**
 *  _isalpha - A function that checks for lowercase and uppercase characters
 *
 * @c: checks the character
 *
 * Return: Returns 1 if'= 'c' is lowercase or uppercase,  Returns 0 otherwise
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	else
		return (0);
}
