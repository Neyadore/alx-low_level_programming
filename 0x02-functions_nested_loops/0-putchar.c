#include <string.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;
	char *str1;

	strcpy(str1, "_putchar");
	for (i = 0; i < 8; i++)
	{
		_putchar(str1[i]);
	}
	putchar('\n');

	return (0);
}
