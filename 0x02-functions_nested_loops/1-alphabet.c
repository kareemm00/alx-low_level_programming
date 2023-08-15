#include "main.h"

/**
 *  print_alphabet - A function that prints alphabets in lowecase
 *
 * main - check the code
 *
 * Return: Always 0
 */

void print_alphabet(void)
{
	int alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		_putchar(alpha);
		_putchar('\n');
	}
}
int main(void)
{
	print_alphabet();
	return (0);
}
