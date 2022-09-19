#include "main.h"

/**
 * print_rev - prints string in reverse, followed by new line
 * @s: the string
 *Return: Returns nothing
 */

void print_rev(char *s)
{
	int i;

	int j = _strlen(s);

	for (i = j; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
