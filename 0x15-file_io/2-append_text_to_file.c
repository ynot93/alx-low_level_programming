#include "main.h"
#include <string.h>
/**
 * append_text_to_file - Adds text to the end of a file.
 * @filename: The name of the file.
 * @text_content: String to add at the end of the file.
 *
 * Return: -1 on failure,
 *          1 on success.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int f_des;
	ssize_t written_bytes;

	if (filename == NULL)
		return (-1);

	f_des = open(filename, O_WRONLY | O_APPEND);

	if (f_des == -1)
		return (-1);

	if (text_content != NULL)
	{
		written_bytes = write(f_des, text_content, strlen(text_content));
		if (written_bytes == -1)
		{
			close(f_des);
			return (-1);
		}
	}
	close(f_des);
	return (1);
}
