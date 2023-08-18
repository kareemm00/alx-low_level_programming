#include "main.h"

/**
 * print_diagonal - a function that draws a diagonal line on the terminal
 *
 * @n:is the number of times the character \ should be printed
*/

void print_diagonal(int n)
{
	int d, s;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (d = 0; d < n; d++)
		{
			for (s = 0; s < d; s++)
				_putchar(' ');
			_putchar(92);
			_putchar('\n');
		}
	}
}
