#include <stdlib.h>
#include <stdio.h>
/**
 * main - start point
 * @argc : int
 * @argv : char
 * Return 0 or 1
 */

int main(int argc, char *argv[])
{
	(void)argc;
	int mul;

	if (argc == 3)
	{
		mul = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", mul);
		return (0);
	}
	else
	{
		printf("%s\n", "Error");
		return (1);
	}

}
