#include "3-calc.h"

/**
 * main - check the code for School students.
 * @argc: argument c
 * @argv: argument v.
 *
 * Return: Always 0
 */
int main(int argc, char **argv)
{
	int (*oper)(int, int), k, j;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	k = atoi(argv[1]);
	j = atoi(argv[3]);

	oper = get_op_func(argv[2]);
	if (!oper)
	{
		printf("Error\n");
		exit(99);
	}
	if (!j && (argv[2][0] == '/' || argv[2][0] == '%'))
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", oper(k, j));

	return (0);

}
