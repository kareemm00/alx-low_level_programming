#include "main.h"

/**
 * rev_string - a function that reverses a string.
 *
 * @s: pointer to the string
*/

void rev_string(char *s)
{
	int n, l;
	char swap;

	for (l = -1; s[l] != '\0'; l++)
	{

	}

	for (n = 0; n < l / 2; n++)
	{
		swap = s[n];
		s[n] = s[l - n];
		s[l - n] = swap;
	}


}
