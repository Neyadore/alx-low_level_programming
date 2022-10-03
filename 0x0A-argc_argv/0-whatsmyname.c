#include "main.h"
#include <stdio.h>

/**
 *mynameis - this program prints its own name.
 *@argv: array of function names and arguements;
 *Return: Always nothing (0);
*/

int mynameis(char const *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
