#include <unistd.h>

/**
 * main - Entry point
 *
 * Description: Print the size of various data types
 *
 * Return: Always (0) (Success)
 */
int main(void)
{
	/* prints message using write */
	char msg[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n"; 
	write(2, msg, sizeof(msg) - 1);
	
	return (1);
}
