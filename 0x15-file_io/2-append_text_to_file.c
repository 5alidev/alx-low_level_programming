#include "main.h"
#include <string.h>
/**
 * append_text_to_file - appends text at
 * the end of a file.
 *
 * @filename: file name
 * @text_content: text content
 *
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	if (filename == NULL)
		return (-1);
	int FD;

	FD = open(filename, O_WRONLY | O_APPEND);
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
