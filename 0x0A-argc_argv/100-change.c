#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that prints the minimum number of coins
 *to make change for an amount of money.
 *
 * @argc: input integer
 * @argv: arrgument v
 *
 * Return: 0 (success), return 1 if fail
*/

int main(int argc, char *argv[])
{
	if (argc == 2)
	{
		int i, num = 0;
		int cash = atoi(argv[1]);
		int cent[] = {25, 10, 5, 2, 1};

		for (i = 0; i < 5; i++)
		{
			if (cash >= cent[i])
			{
				num += cash / cent[i];
				cash %= cent[i];
				if (cash % cent[i] == 0)
				{
					break;
				}
			}
		}
		printf("%d\n", num);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);

