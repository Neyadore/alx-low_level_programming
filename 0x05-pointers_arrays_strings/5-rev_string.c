#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * rev_string - reverses a string
 *@s: the string
 *Return: returns nothing
 */

void rev_string(char *s)
{
	char *a;
	int k;
	int i;
	int j = strlen(s);

	a = (char *)malloc(j * sizeof(char));
	for (i = j - 1, k = 0; k < j; k++, i--)
	{
		a[k] = s[i];
	}
	s = a;
}
