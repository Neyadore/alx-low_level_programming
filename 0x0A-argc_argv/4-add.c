#include "main.h"
#include <ctype.h>

/**
 *main - adds posotive integers
 *@argv: list
 *@argc: number of args
 *Return: zero (0) is sucesfull;
 *(1) if failed
 */

int main(int argc, char const *argv[])
{
	int sum = 0;
	int i;

	if (argc == 1)
		printf("0\n");

	for (i = 0; i < argc; i++)
	{
		if (isdigit(atoi(argv[i])) && atoi(argv[i]) > 0)
			sum = sum + atoi(argv[i]);
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%i\n", sum);
	}
