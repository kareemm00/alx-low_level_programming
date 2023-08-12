#include <stdio.h>

/**
 * main - start of the program
 *
 * Description: a c program that prints
 * all possible different combinations of two digits
 *
 * Return: 0 (success)
*/

int main(void)
{
	int num1 = 0, num2;

	while (num1 <= 9)
	{
		num2 = 0;
		while (num2 <= 9)
		{
			if (num1 != num2 && num1 < num2)
			{
				putchar(num1 + '0');
				putchar(num2 + '0');
				if (num1 == '8' && num2 == '9')
				{
					putchar('\n');
				}
				else
				{
					putchar(',');
					putchar(' ');
				}
			}
			num2++;
		}
		num1++;
	}
	return (0);
}
