#include <stddef.h>
#include "3-calc.h"

/**
 * main - start point
 * 
 * @argc : number of arguuments
 * @argv : arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int num1, num2;
	char *op;

	num1 = argv[1];
	num2 = argv[3];
	op = argv[2];

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if (get_op_func(op) == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	if ((*op == / &&num2 == 0) || (*op == % &&num2 == 0))
	{
		printf("Error\n");
		exit(100);
	}

		calc = get_op_func(op)(num1, num2);
	printf("%d\n", calc);

		return (0);
}
