#include "main.h"
#include <string.h>

/**
 *_strncat - concarnates two strings
 *@dest: destination string
 *@src: source string
 *@n: third parameter
 * Return: a string
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, len;

	while (dest[i++])
	{
		len++;
	}
	for (i = 0; src[i] && i < n; i++)
	{
		dest[len++] = src[i];
	}
	return (dest);
}
