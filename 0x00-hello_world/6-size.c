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

	printf("Size of a char: %zu", sizeof(chartype));
	printf("Size of an int: %zu", sizeof(inttype));
	printf("Size of a long int: %zu", sizeof(longinttype));
	printf("Size of a long long int: %zu", sizeof(longlonginttype));
	printf("Size of a float: %zu", sizeof(floattype));

	return (0);
}
