#include "main.h"

/**
 * puts2 - a function that prints every other character of a string,
 *starting with the first character, followed by a new line
 *
 * @str: string parameter
*/

void puts2(char *str)
{
	int l;

	for (l = 0; s[l] != '\0'; l++)
	{
		if (l % 2 == 0)
		{
			putchar(str[l]);
		}
	}
	putchar('\n');

}
