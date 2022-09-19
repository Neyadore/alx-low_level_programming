#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 *print_array - prints the array of integars
 *@a: string
 *@n: number of integers
 *Return: returns nothing;
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < (n - 1); i++)
	{
		printf("%d, ", a[i]);
	}
	printf("%d", a[n]);
}
