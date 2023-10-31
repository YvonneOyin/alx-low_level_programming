#include "main.h"

/**
 * append_text_to_file - a funcion that appends text at the end of a file
 *
 * @filename: file to append data to
 * @text_content: text content to append to file
 *
 * Return: 1 on success, -1 on failure
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int file, write_f, word;

	if (!filename)
		return (-1);

	file = open(filename, O_APPEND | O_WRONLY);
	if (file == -1)
		return (-1);

	if (text_content)
	{
		for (word = 0; text_content[word] != '\0'; word++)
			;

		write_f = write(file, text_content, word);
		if (write_f == -1)
			return (-1);
	}
	close(file);

	return (1);
}
