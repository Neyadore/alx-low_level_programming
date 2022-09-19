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

	for (i = j - 1; i >= 0; i--)
	{
		a = (char *)malloc(j * sizeof(char));
		for (k = 0; k < j; k++)
		{
			a[k] = s[i];
		}
	}
}
