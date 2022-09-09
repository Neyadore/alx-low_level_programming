#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *main - entry point
 *
 *return: Always zero (Success)
*/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	int a;
	a = n % 10;

	if (a < 6)
		printf("The last digit of %i is %i and is greater than 5", n, a);
	else if (a == 0)
		printf("The last digit of %i is %i and is zero", n, a);
	else
		printf("The last digit of %i is %i and less than 6 and is not 0", n, a);

	return (0);
}
