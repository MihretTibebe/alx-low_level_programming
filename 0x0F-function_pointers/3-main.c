#include <stddef.h>
#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
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
	int calc;

	if (argc != 4)
        {
                printf("Error\n");
                exit(98);
        }

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	op = argv[2];

	if (get_op_func(op) == NULL || op[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	if ((*op == '/' &&num2 == 0) || (*op == '%' &&num2 == 0))
	{
		printf("Error\n");
		exit(100);
	}

		calc = get_op_func(op)(num1, num2);
	printf("%d\n", calc);

		return (0);
}
