#include <stdio.h>

/**
 * main - start of the program
 *
 * Description: a c program that prints numbers from 0 to 9 using putchar
 *
 * Return: 0 (success)
*/

int main(void)
{
	int num = 0;

	while (num < 10)
	{
		putchar(num + '0')
		num++;
	}
	printf('\n');
	return (0);
}
