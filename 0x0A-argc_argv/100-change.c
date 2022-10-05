#include "main.h"

/**
 *main - prints minimum number of coind needed for transction
 *@argc: number
 *@argv: list
 *Return: (1) if error,
 * otherwise (0)
 */

int main(int argc, char const *argv[])
{
	int coin[5] = {25, 10, 5, 2, 1};
	int coincount, tmp, i, change;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	if (atoi(argv[1]) <= '0')
	{
		printf("0\n");
		return (0);
	}

	coincount = 0;
	change = atoi(argv[1]);
	for (i = 0; i < 5; i++)
	{
		if (change >= coin[i])
		{
			tmp = (change / coin[i]);
			coincount += tmp;
			change = change % coin[i];
			if (change == 0)
			{
				printf("%i\n", coincount);
				return (0);
			}
		}
	}
	printf("%i\n", coincount);
	return (0);
}
