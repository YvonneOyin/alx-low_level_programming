#include "main.h"

/**
 * create_file - creates a file
 *
 * @filename: name of the file to create
 * @text_content: text to write in the file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int file, write_f, word;

	if (!filename)
		return (-1);

	file = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (file == -1)
		return (-1);

	if (text_content)
	{
		for (word = 0; text_content[word] != '\0'; word++)
			;

		write_f = write(file, text_content, word);
		if (write_f != word)
			return (-1);
	}

	close(file);

	return (1);
}
