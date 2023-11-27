#include "main.h"
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
	int FD, len = 0;

	if (!filename)
		return (-1);
	FD = open(filename, O_WRONLY | O_APPEND);
	if (FD == -1)
		return (-1);
	while (text_content && text_content[len])
		len++;
	write(FD, text_content, len);
	close(FD);
	return (1);
}
