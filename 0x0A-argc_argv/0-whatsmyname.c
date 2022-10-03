#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 *_whatsmyname - this function prints its own name.
 *@argv: array of function names and iarguements ;
 *Return: Always nothing (0);
*/

int _whatsmyname(char *argv[])
{
	printf("%s", argv[0]);
	return (0);
}
