#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char ch;


	for (ch = 122; ch <= 97; ch--)
	{
		putchar(ch);
	}
	putchar('\n');

	return (0);
}
