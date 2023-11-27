#include "main.h"
/**
 * read_textfile - reads a text file and prints it
 * to the POSIX standard output.
 *
 * @filename: file name
 * @letters: number of letters to read & print
 *
 * Return: Number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t openFile, l, w;
	char *text;

	if (filename == NULL)
		return (0);
	openFile = open(filename, O_RDONLY);
	text = malloc(letters);
	if (text == NULL)
		return (0);
	if (openFile == -1)
	{
		free(text);
		return (0);
	}
	l = read(openFile, text, letters);
	w = write(STDOUT_FILENO, text, l);
	close(openFile);
	return (w);
}
