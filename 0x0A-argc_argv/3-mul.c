#include "main.h"

/**
 *main - prints prduct os two numbers
 *@argc: number
 *@argv: list
 *Return: Always nothing (0);
 */


int main(int argc, char const *argv[])
{
	int product;
	int a;
	int b;

	if (argc != 3)
		return (1);

		a = atoi(argv[1]);
		b = atoi(argv[2]);
		product = (a * b);
		printf("%i\n", product);

	return (0);
}
