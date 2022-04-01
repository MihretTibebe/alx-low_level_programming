#include <stdio.h>
#include <stdlib.h>

/**
 * isInt - checkes if a string is integer
 * @s : string
 * Return: 0 or 1
 */

int  isInt(char *s)
{
	int i;

	while (s[i] != '\0')
	{
		if (s[i] < '0' || s[i] > '9')
		{
			return (1);
		}
		i++;
	}
	return (0);
}

/**
 * main - start point
 * @argc : int
 * @argv : char
 * Return:0 or 1
 */

int main(int argc, char *argv[])
{
	int i, sum = 0;

	if (isInt(argv))
	{
		printf("Error\n");
		return (1);
	}

	for (i = 1; i < argc; i++)
	{
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
