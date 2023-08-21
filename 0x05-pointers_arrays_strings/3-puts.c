#include "main.h"

/**
 * _puts - a function that prints a string, followed by a new line
 *
 * @str: string  parameter
*/

void _puts(char *str)
{
	while (*str != '\0')
	{
		putchar(*str);
		str++;
	}
	putchar('\n');
}
