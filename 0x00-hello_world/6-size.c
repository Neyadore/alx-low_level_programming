#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char chartype;
	int inttype;
	long int longinttype;
	long long int longlonginttype;
	float floattype;

	printf("Size of a char: %zu\n", sizeof(chartype));
	printf("Size of an int: %zu\n", sizeof(inttype));
	printf("Size of a long int: %zu\n", sizeof(longinttype));
	printf("Size of a long long int: %zu\n", sizeof(longlonginttype));
	printf("Size of a float: %zu\n", sizeof(floattype));

	return (0);
}
