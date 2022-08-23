#include "main.h"

/**
 * create_file- function that creates a file
 * @filename: name of file to be created
 * @text_content: content of file
 * Return: 1 on success or -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	int ld;
	int wrx;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	if (text_content == NULL)
	{
		text_content = "";
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
