#include "main.h"
/**
 * is_prime_number - checkes if a number is prime or not
 * @n : int
 * Return: 1 or 0
 */

int is_prime_number(int n)
{
	return (prime(n, 2));
}

/**
 * prime - checkes if a number is prime or not
 * @n : int
 * @v : int
 * Return: 1 or 0
 */

int prime(int n, int v)
{
	if (n == 1 || n == -1)
		return (0);
	else if (v < n)
	{
		if (n % v == 0)
		{
			return (0);
		}
		else
		{
			prime(n, v + 1);
		}
	}

	return (1);
}
