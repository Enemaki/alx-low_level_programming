#include "main.h"
/**
 * read_textfile- function that reads a text file and prints
 * it to the POSIX standard output
 * @filename: pointer to file to be read
 * @letters: number of letters to be read
 * Return: actual number of letters read
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t sz, buf2;
	char *buf;

	if (filename == NULL)
	{
		return (0);
	}
	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		free(buf);
		return (0);
	}
	sz = read(fd, buf, letters);
	if (sz == -1)
	{
		close(fd);
		free(buf);
		return (0);
	}
	buf2 = write(STDOUT_FILENO, buf, sz);
	if (buf2 == -1)
	{
		close(fd);
		free(buf);
		return (0);
	}
	close(fd);
	free(buf);
	return (buf2);
}
