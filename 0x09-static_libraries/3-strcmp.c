#include "main.h"

/**
 * *_strcmp - a function that compares two strings
 *
 * @s1: string input 1
 * @s2: string input 2
 *
 * Return: cmp
*/

int _strcmp(char *s1, char *s2)
{
	int cmp = 0;

	while (*s1)
	{
		if (*s1 != *s2)
		{
			cmp = ((int)*s1 - 48) - ((int)*s2 - 48);
			break;
		}
		s1++;
		s2++;
	}
	return (cmp);

}

