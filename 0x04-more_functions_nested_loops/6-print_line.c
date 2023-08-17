#include "main.h"

/**
 *  print_line - A function that draws a straight line in the terminal
 *
 *  @n:is the number of times the character _ should be printed
 */

void print_line(int n)
{
	int l;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (l = 1; l <= n; l++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}

}
