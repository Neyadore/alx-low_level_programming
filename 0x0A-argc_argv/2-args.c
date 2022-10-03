#include "main.h"

/**
 *main - print all arguements with new line
 *@argv: list
 *@argc: number;
 *Return: Always zero (0)
 */

int main(int argc, char const *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return(0);
}
