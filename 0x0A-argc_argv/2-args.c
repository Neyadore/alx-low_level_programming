#include "main.h"

/**
 *main - printa all arguements with new line
 *@argv: list
 *@argc: number;
 *Return: Always zero (0)
 */

int main(int argc, char const *argv[])
{
	(void)argc;
	int i;

	for (i = 1; argv[i] != NULL; i++)
	{
		printf("%s\n", argv[i]);
		return (0);
	}
}
