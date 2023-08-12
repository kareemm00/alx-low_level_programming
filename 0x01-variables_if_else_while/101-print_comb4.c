#include <stdio.h>

/**
 * main - start of the program
 *
 * Description: a c program that prints
 * all possible different combinations of three digits
 *
 * Return: 0 (success)
*/

int main(void)
{
	int num1 = 0, num2, num3;

	while (num1 <= 9)
	{
		num2 = 0;
		while (num2 <= 9)
		{
			num3 = 0;
			while (num3 <= 9)
			{
			if (num1 != num2 && num1 < num2 && num2 != num3 && num2 < num3)
			{
				putchar(num1 + '0');
				putchar(num2 + '0');
				putchar(num3 + '0');
				if (num1 == 7 && num2 == 8 && num3 == 9)
				{
					putchar('\n');
				}
				else
				{
					putchar(',');
					putchar(' ');
				}
			}
			num3++;
			}
			num2++;
		}
		num1++;
	}
	return (0);
}
