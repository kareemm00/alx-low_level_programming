#include <stdio.h>

/**
 * main - start of the program
 *
 * Description: a c program that prints all alphabets in reverse
 *
 * Return: 0 (success)
*/

int main(void)
{
	char alpha = 'z';

	while (alpha >= 'a')
	{
		putchar(alpha);
		alpha--;
	}
	putchar('\n');
	return (0);
}
