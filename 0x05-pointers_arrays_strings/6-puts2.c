#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 *puts2 - prints every otther hcaracter of a string
 *@str: the string
 *Return: returns nothing
 */

void puts2(char *str)
{
	int length = strlen(str);
	int i;

	for (i = 0; i < length; i++)
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
