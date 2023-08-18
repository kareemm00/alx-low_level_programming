#include "main.h"

/**
 * print_diagonal - A function that draws a diagonal line in the terminal
 *
 * @n: is the number of times the character _ should be printed
 */

void print_diagonal(int n)
{
	int d, s;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (d = 1; d <= n; d++)
		{
			for (s = 1; s <= d; s++)
				_putchar(' ');
			_putchar(92);
			_putchar('\n');
		}
	}
}
