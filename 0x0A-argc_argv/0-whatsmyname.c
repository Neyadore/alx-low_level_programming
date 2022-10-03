#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 *mynameis - this program prints its own name.
 *@argv: array of function names and arguements;
 *Return: Always nothing (0);
*/

int mynameis(char *argv[])
{
	printf("%s", argv[0]);
	return (0);
}
