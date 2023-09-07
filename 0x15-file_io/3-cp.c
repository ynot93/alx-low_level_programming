#include "main.h"
/**
 * error_handle - Handle error printing.
 * @exit_code: status code to exit an error with.
 * @format: string the describes the error.
 * @arg: Name of file included with the error message.
 *
 * Return: Nothing.
 */
void error_handle(int exit_code, const char *format, const char *arg)
{
	dprintf(STDERR_FILENO, format, arg);
	exit(exit_code);
}

/**
 * main - Copy content of one file to another.
 * @argc: Number of command-line arguments.
 * @argv: An array of command line arguments.
 *
 * Return: 0 on success.
 */
int main(int argc, char *argv[])
{
	int fdes_from, fdes_to;
	char buffer[BUFFER_SIZE];
	ssize_t read_bytes, written_bytes;

	if (argc != 3)
		error_handle(97, "Usage: cp file_from file_to\n", NULL);
	fdes_from = open(argv[1], O_RDONLY);

	if (fdes_from == -1)
		error_handle(98, "Error: Can't read from file %s\n", argv[1]);
	fdes_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0644);

	if (fdes_to == -1)
	{
		close(fdes_from);
		error_handle(99, "Error: Can't write to %s\n", argv[2]);
	}

	while ((read_bytes = read(fdes_from, buffer, sizeof(buffer))) > 0)
	{
		written_bytes = write(fdes_to, buffer, read_bytes);
		if (written_bytes == -1)
		{
			close(fdes_from), close(fdes_to);
			error_handle(99, "Error: Can't write to file %s\n", argv[2]);
		}
	}

	if (read_bytes == -1)
	{
		close(fdes_from), close(fdes_to);
		error_handle(98, "Error: Can't read from file %s\n", argv[1]);
	}

	if (close(fdes_from) == -1 || close(fdes_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n",
				(close(fdes_from) == -1) ? fdes_from : fdes_to), exit(100);
	}
	return (0);
}
