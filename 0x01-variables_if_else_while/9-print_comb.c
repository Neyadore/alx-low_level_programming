#include <stdio.h>
#include <stdlib.h>

/**
 *main - Entry point
 *
 *Return: Always 0 (success)
 */

int main(void)
{
	int num;

	for (num = 0; num < 9; num++)
	{
		putchar(num);
		putchar(',');
		putchar(' ');
	}
	putchar('9');

	return (0);
}
