#include <stdio.h>
#include <stdlib.h>

/**
 * main - print sum of command
 * @argc: number of arguments
 * @argv: pointer to array
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int sum;

	if (argc == 3)
	{
		sum = atoi(argv[1]) * atoi(argv[2]);
		printg("%d\n", sum);
	}
	else
	{
		printf("Eroor\n");
		return (1);
	}

	return (0);
}

