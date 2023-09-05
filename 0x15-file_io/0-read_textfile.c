#include "main.h"
/**
 * read_textfile - Reads a textfile and prints it to the POSIX stdout.
 * @filename: The name of the text file.
 * @letters: Number of letters it should read and print.
 *
 * Return: 0 if file cannot be opened or read,
 *         0 if filename is NULL,
 *         0 if write fails or doesn't write expected amount of bytes,
 *         The number of letters it could read and print.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t f_des, read_bytes, written_bytes;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(letters);

	if (buffer == NULL)
		return (0);

	f_des = open(filename, O_RDONLY);

	if (f_des == -1)
	{
		free(buffer);
		return (0);
	}

	read_bytes = read(f_des, buffer, letters);

	if (read_bytes == -1)
	{
		free(buffer);
		return (0);
	}

	written_bytes = write(STDOUT_FILENO, buffer, read_bytes);

	if (written_bytes == -1 || written_bytes != read_bytes)
	{
		free(buffer);
		return (0);
	}
	free(buffer);
	close(f_des);

	return (written_bytes);
}
