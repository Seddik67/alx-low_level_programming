#include <unistd.h>
/**
 * main - the entry point
 * Return: always 1 because this program essentially writes a
 * specific message to the standard error output,
 * which is often used to display error messages or important
 * information that a user or developer should see. The main function returns 1
 * to indicate that the program ended with a non-zero status,
 * suggesting that something
 * unexpected might have happened during its execution
 */

int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
