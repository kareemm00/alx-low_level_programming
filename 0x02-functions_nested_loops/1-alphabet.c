#include "main.h"

/**
 *  print_alphabet - A function that prints alphabets in lowecase
 *
 */

void print_alphabet(void)
{
	int alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		_putchar(alpha);
	}
	_putchar('\n');
}
