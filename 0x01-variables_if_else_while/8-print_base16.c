#include <stdio.h>

/**
 * main - start of the program
 *
 * Description: a c program that prints numbers from 0 to 9
 * and from a to f using putchar
 *
 * Return: 0 (success)
*/

int main(void)
{
	int num = 0;
	char alpha = 'a';

	while (num < 10)
	{
		putchar(num + '0');
		num++;
	}
	while (alpha <= 'f')
	{
		putchar(alpha);
		alpha++;
	}
	putchar('\n');
	return (0);
}
