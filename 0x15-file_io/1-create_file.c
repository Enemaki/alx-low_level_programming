#include "main.h"
/**
 * _strlen- function determine length of string
 * @s: string to used
 * Return: length of string
 */
int _strlen(char *s)
{
	int len;
	int i = 0;

	while (s[i] != '\0')
	{
		len++;
		i++;
	}
	return (len);
}

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
	int wr;

	ld = _strlen(text_content);
	if (filename == NULL)
		return (-1);
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}
	wr = write(fd, text_content, ld);
	if (wr == -1)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}
