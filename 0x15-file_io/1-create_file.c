#include "main.h"
/**
 * create_file - Creates a file.
 * @filename: Name of the file.
 * @text_content: Null terminated string that populates the file.
 *
 * Return: -1 on failure,
 *          1 on success.
 */
int create_file(const char *filename, char *text_content)
{
	int f_des, bytes_written, count;

	if (filename == NULL)
		return (-1);
	
	f_des = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0644);

	if (f_des == -1)
		return (-1);

	while (*text_content)
	{
		count++;
		text_content++;
	}
	
	if (text_content != NULL)
	{
		bytes_written = write(f_des, text_content, count);
		
		if (bytes_written == -1)
		{
			close(f_des);
			return -1;
		}
	}
	
	close(f_des);
	return (1);
}
