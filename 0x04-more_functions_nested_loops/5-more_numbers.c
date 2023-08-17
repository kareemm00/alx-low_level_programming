#include "main.h"

/**
 *  more_numbers - A function that prints 10 times the numbers, from 0 to 14
 *
 *  Return: Always 0
 */

void more_numbers(void)
{
	int loop, num;

	for (loop = 1; loop <= 10; loop++)
	{
		for (num = 0; num <= 14; num++)
		{
			_putchar(num + 48);
		}
		_putchar('\n');
	}
}
