#include <unistd.h>

/**
 * main - Entry point
 *
 * Return: Always 1 (Error)
 */
int main(void)
{
	/**
	 * msg - Message to write to stderr
	 */
	char msg[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	/* Write message to stderr */
	write(STDERR_FILENO, msg, sizeof(msg) - 1);

	return (1);
}
