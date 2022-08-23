#include "main.h"

/**
 * append_text_to_file- function that creates a file
 * @filename: name of file to be created
 * @text_content: content of file
 * Return: 1 on success or -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int ld;
	int wrx;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	if (text_content == NULL)
	{
		return (1);
	}

	for (ld = 0; text_content[ld]; ld++)
		;
	wrx = write(fd, text_content, ld);
	if (wrx == -1)
	{
		return (-1);
	}
	close(fd);
	return (1);
}
