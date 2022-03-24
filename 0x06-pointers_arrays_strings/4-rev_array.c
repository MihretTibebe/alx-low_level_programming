#include "main.h"
/**
 * reverse_array - reverses the content of an array of integers
 * @a : array of intigers
 * @n : sizze of an array
 *
 * Return: void
 */

void reverse_array(int *a, int n)
{
int i;
int mid = n / 2;
int temp;
	for (i = 0; i <= mid; i++)
	{
		temp = a[i];
		a[i] = a[n - 1];
		a[n -1] = temp;
		n--;
		
	}

}
