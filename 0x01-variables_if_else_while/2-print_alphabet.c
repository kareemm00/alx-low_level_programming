#include <stdio.h>

/**
 * main - start of the program
 *
 * Description: a c program that prints all alphabets
 *
 * Return: 0 (success)
*/

int main(void)
{
	char alpha = 'a';

	while (alpha <= 'z')
	{
		putchar(alpha);
		alpha++;
	}
	putchar("\n");
	return (0);
}
