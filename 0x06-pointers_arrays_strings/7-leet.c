#include "main.h"

/**
 * *leet - a function that encodes a string into 1337
 *
 * @s: string
 *
 * Return: string
*/

char *leet(char *s)
{
	char arr1[] = {'A', 'E', '0', 'T', 'L'};
	char arr2[] = {4, 3, 0, 7, 1};
	char *p = s;
	unsigned int i;

	while (*s)
	{
		for (i = 0; i < sizeof(arr1) / sizeof(char); i++)
		{
			if (*s == arr1[i] || *s == arr1[i] + 32)
			{
				*s = 48 + arr2[i];
			}
		}
		s++;
	}
	return (p);
}
