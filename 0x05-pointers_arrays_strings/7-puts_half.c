#include "main.h"

/**
 * puts_half - a function that prints half of a string, followed by a new line.
 *
 * @str: string parameter
*/

void puts_half(char *str)
{
	int l, i;

	for (l = 0; str[l] != '\0'; l++)
	{

	}
	if (l % 2 == 1)
	{
		i = (l - 1) / 2;
		i++;
	}
	else
		i = l / 2;

	for (i = 0; i < l; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
