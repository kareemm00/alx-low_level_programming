#include "main.h"

/**
 * _strspn - a function that gets the length of a prefix substring
 *
 * @s: string input
 * @accept: bytes input
 *
 * Return: the number of bytes in the initial segment of s
*/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int k, j;

	for (k = 0; s[k] != '\0'; k++)
	{
		for (j = 0; accept[j] != s[k]; j++)
		{
			if (accept[j] == '\0')
			{
				return (k);
			}
		}
	}
	return (k);
}
