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
/*	int mul; */

	if (argc == 3)
	{
/*		mul = atoi(argv[1]) * atoi(argv[2]); */
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
		return (0);
	}
	else
	{
		printf("%s\n", "Error");
		return (1);
	}

}
