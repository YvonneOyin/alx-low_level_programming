#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 *
 * @filename: a pointer to a string
 * @letters: the number of letters it should read and print
 *
 * Return: 0 if it fails or actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file;
	ssize_t read_f, count;
	char *buf;

	if (!filename)
		return (0);

	file = open(filename, O_RDONLY);
	if (file == -1)
		return (0);

	buf = malloc(sizeof(char) * letters);
	if (!buf)
	{
		free(buf);
		return (0);
	}

	read_f = read(file, buf, letters);
	if (read_f == -1)
		return (0);
	buf[read_f] = '\0';

	close(file);

	count = write(STDOUT_FILENO, buf, read_f);
	if (count == -1 || read_f != count)
		return (0);

	free(buf);
	return (count);
}
