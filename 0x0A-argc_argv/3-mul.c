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
	if (argc != 3)
	{
		printf("%s\n", "Error");
		return (1);
	}
	else
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
		return (0);
	}
}
