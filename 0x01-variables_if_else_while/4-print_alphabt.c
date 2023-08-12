#include <stdio.h>

/**
 * main - start of the program
 *
 * Description: a c program that prints all alphabets except q and e
 *
 * Return: 0 (success)
*/

int main(void)
{
	char alpha = 'a';

	while (alpha <= 'z')
	{
		if (alpha == 'q' || alpha == 'e')
			alpha++;
		putchar(alpha);
		alpha++;
	}
	putchar('\n');
	return (0);
}
