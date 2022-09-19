#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 **_strcpy - copies the string into another string, returns pointer value
 *@src: source string
 *@dest: destination string
 *Return: pointer for dest
 */

char *_strcpy(char *dest, char *src)
{
	strcpy(dest, src);

	return (dest);
}
