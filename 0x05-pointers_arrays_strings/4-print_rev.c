#include "main.h"

/**
 * print_rev - a function that prints a string in reverse,
 *followed by a new line
 *
 * @s: pointer to the string
*/

void print_rev(char *s)
{
	int r = 0;

	while (s[r])
		r++;

	while (r--)
	{
		putchar(s[r]);
	}
	putchar('\n');
}
