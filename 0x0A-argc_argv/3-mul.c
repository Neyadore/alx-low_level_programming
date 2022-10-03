#include "main.h"

/**
 *main - prints prduct os two numbers
 *@argc: number
 *@argv: list
 *Return: Always nothing (0);
 */


int main(int argc, char const *argv[])
{
	if (argc - 1 != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%i", (atoi(argv[1]) * atoi(argv[2])));

	return (0);
}
