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
	int index;
	int len = 0;

	while (dest[index++])
	{
		len++;
	}
	for (index = 0; src[i] && index < n; index++)
	{
		dest[len++] = src[i];
	}
	return (dest);
}
