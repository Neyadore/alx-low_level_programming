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

	strcpy(str1, "_putchar");
	for (i = 97; i <= 122; i++)
	{
		_putchar(i);
	}
	putchar('\n');

	return (0);
}
