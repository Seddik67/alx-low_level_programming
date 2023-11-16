#include <stdio.h>
#include <stdlib.h>

/**
 * main - function to print sum of argument
 * @argc: the number of arguments
 * @argv: array of pointers of arguments
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int sum = 0;
	char *c;

	while (--argc)
	{
		for (c = argv[argc]; *c; c++)
			if (*C < '0' || *c > '9')
				return (printf("Error\n"), 1);
		sum += atoi(argv[argc]);

	}
	printf("%d\n", sum);
	return (0);
}
