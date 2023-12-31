#include "main.h"
#include <string.h>
/**
 * create_file - creates a file.
 *
 * @filename: file name
 * @text_content: text content of file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int FD;

	if (filename == NULL)
		return (-1);

	FD = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (FD == -1)
		return (-1);
	if (text_content != NULL)
	{
		ssize_t write_status;

		write_status = write(FD, text_content, strlen(text_content));
		if (write_status == -1)
		{
			close(FD);
			return (-1);
		}
	}
	close(FD);
	return (1);
}
