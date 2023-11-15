#include <stdlib.h>
#include <stdio.h>

/**
 * main - print the number of argument
 * @argc: number of commandline arguments
 * @argv: array of pointers
 * Return: 0
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
