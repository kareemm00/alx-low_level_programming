#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that adds positive numbers
 *
 * @argc: input integer
 * @argv: arrgument v
 *
 * Return: 0 (success), return 1 if fail
*/

int main(int argc, char *argv[])
{
	int result = 0;
	char *ptr;

	while (--argc)
	{
		for (ptr = argv[argc]; *ptr; ptr++)
		{
			if (*ptr < '0' || *ptr > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		result += atoi(argv[argc]);
	}
	printf("%d\n", result);
	return (0);
}

