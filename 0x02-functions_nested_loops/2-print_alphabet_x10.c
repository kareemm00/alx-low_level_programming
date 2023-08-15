#include "main.h"

/**
 *  print_alphabet_x10 - A function that prints alphabets in lowecase 10 times
 *
 */

void print_alphabet_x10(void)
{
	int alpha;

	for (int i = 0; i <= 9; i++)
	{
	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		_putchar(alpha);
	}
	_putchar('\n');
	}
}
