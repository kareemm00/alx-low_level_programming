#include <stdio.h>

/**
 * main - start of the program
 *
 * Description: a c program that prints  alphabets lower and upper cases
 *
 * Return: 0 (success)
*/

int main(void)
{
	char lower = 'a';
	char upper = 'A';

	while (lower <= 'z')
	{
		putchar(lower);
		lower++;
	}
	while (upper <= 'Z')
	{
		putchar(upper);
		upper++;
	}
	putchar('\n');
	return (0);
}
