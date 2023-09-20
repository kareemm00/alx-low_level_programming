#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * main - check the code for School students.
 * @argc: argument c
 * @argv: argument v
 *
 * Return: Always 0.
 */
int main(int argc, char **argv)
{
	char *op = (char *) main;
	int k;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	k = atoi(argv[1]);

	if (k < 0)
	{
		printf("Error\n");
		exit(2);
	}
	while (k--)
		printf("%02hhx%s", *op++, k ? " " : "\n");
	return (0);

}
