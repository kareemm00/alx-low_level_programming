#include "main.h"

/**
 *  more_numbers - A function that prints 10 times the numbers, from 0 to 14
 *
 *  Return: Always 0
 */

void more_numbers(void)
{
	int i, j, k;

	for (i = 1; i <= 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			j = k;
			if (j > 9)
			{
				_putchar(1 + '0');
				k = j % 10;
			}
			_putchar(j + '0');
		}
		_putchar('\n');
	}
}
