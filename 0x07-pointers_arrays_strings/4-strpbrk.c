#include "main.h"

/**
 * *_strpbrk - a function that searches a string for any of a set of bytes
 *
 * @s: string input
 * @accept: bytes input
 *
 * Return: a pointer to the byte in s or NULL if no such byte is found
*/

char *_strpbrk(char *s, char *accept)
{
	int k, j;

	for (k = 0; s[k] != '\0'; k++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[k] == accept[j])
			{
				return (s + k);
			}
		}
	}
	return ('\0');
}
