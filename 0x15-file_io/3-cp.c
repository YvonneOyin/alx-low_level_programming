#include "main.h"

#define SIZE 1024

/**
 * main - copies the content of a file to another file
 *
 * @argc: number of arguments passed to the program
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int file_r, file_wr, wr, r, i;
	char buf[SIZE];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file_r = open(argv[1], O_RDONLY);
	if (file_r == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	file_wr = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	while ((i = read(file_r, buf, SIZE)) > 0)
	{
		if (file_wr == -1 || write(file_wr, buf, i) != i)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			close(file_r);
			exit(99);
		}
	}
	if (i == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	r = close(file_r);
	wr = close(file_wr);
	if (r == -1 || wr == -1)
	{
		if (r == -1)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_r);
		if (wr == -1)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_wr);
		exit(100);
	}
	return (0);
}
