#include <unistd.h>
/**
 * main - Entry point
 *
 * Return: Always 1 (Success)
 */
#include <unistd.h>

int main(void)
{
	const char message[] = "and that peice of art is useful\" - "
		"Dora Korpar,2015-10-19\n"
		writr(STDERR_FILENO, message, sizeof(message) - 1);
	return (1);
}
