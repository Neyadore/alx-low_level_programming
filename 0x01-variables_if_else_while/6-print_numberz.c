
#include <stdio.h>
#include <stdlib.h>

/**
 *main - Entry point
 *
 *Return: Always 0 (success)
 */

int main(void)
{
	int i;

	for (num = 0; num < 10; num++)
	{
		putchar((i % 10) + '0');
	}
	putchar('\n');

	return (0);
}
