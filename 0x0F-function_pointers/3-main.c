#include "3-calc.h"

/**
 * main - main entry
 * @argv: args vector
 * @argc: args count
 * Return: result
 */

int main(int argc, char *argv[])
{
	int n1, n2;
	char *operator;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	operator = argv[2];
	if (get_op_func(operator) == NULL || operator[1] != NULL)
	{
		printf("Error\n");
		exit(99);
	}
	n1 = atoi(argv[1]);
	n2 = atoi(argv[3]);
	if ((*operator == '/' && n2 == 0) || (*operator == '%' && n2 == 0))
	{
		printf("Error\n");
		exit(99);
	}
	printf("%d\n", get_op_func(operator)(n1, n2));
	return (0);
}
