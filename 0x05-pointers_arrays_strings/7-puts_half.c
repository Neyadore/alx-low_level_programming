#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 *puts_half - prints hald of string second half, new line
 *@str: the string;
 * Return: returns nothing;
 */

void puts_half(char *str)
{
	int length = strlen(str);
	int midpoint;
	int i;

	if (length % 2 == 0)
	{
		midpoint = length / 2;
	}
	else
	{
		midpoint = (length - 1) / 2;
	}
	for (i = midpoint; i < length; i++)
	{

		_putchar(str[i]);
	}
}
