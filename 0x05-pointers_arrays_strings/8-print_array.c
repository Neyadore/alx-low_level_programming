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

	printf("%d", a[0]);
	for (i = 1; i < n; i++)
	{
		printf(", %d", a[i]);
	}
}
