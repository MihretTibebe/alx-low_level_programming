#include "3-calc.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * op_add - returns the sum
 *
 * @a : integer
 * @b : integer
 * Return: int
 */
int op_add(int a, int b)
{
	int r;

	r = a + b;
	return (r);
}

/**
 * op_sub - returns the difference
 *
 * @a : integer
 * @b : integer
 * Return: int
 */
int op_sub(int a, int b)
{
	int r;

	r = a - b;
	return (r);
}

/**
 * op_mul - return the product
 *
 * @a : integer
 * @b : integer
 * Return: int
 */
int op_mul(int a, int b)
{
	int r;

	r = a * b;
	return (r);
}

/**
 * op_div - returns the result of the division
 *
 * @a : integer
 * @b : integer
 * Return: int
 */
int op_div(int a, int b)
{
	int r;

	r = a / b;
	return (r);
}

/**
 * op_mod - returns the remainder of the division
 *
 * @a : integer
 * @b : integer
 * Return: int
 */
int op_mod(int a, int b)
{
	int r;

	r = a % b;
	return (r);
}
