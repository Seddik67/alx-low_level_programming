#include "main.h"

/**
 * rev_string -function to reverse a string
 *
 * @s: input parameter string
 *
 * Return: nothing
 */

void rev_string(char *s)
{
	int i, j;
	char temp;

	for (i = 0; s[i] != '\0'; ++i)
		;

	for (j = 0; j < i / 2; j++)
	{
		temp = s[i];
		s[i] = s[i - 1 - j];
		s[i - 1 - j] = temp;
	}
}
