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
	int arg, digit;
	int sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (arg = 1; arg < argc; arg++)
	{
		for (digit = 0; digit != '\0'; digit++)
		{
			if (argv[arg][digit] < '0' || argv[arg][digit] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		sum = sum + atoi(argv[arg]);
	}
	printf("%i\n", sum);
	return (0);
}
