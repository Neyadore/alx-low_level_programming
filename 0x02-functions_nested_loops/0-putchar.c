#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	string str1[8];

	strcpy(str1, "_putchar");
	for (i = 0; i < 8; i++)
	{
		putchar(str1[i]);
	}
	putchar("\n");
}
