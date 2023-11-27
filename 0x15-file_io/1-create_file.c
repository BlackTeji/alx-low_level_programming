#include "main.h"
#include <string.h>

/**
 * create_file - creates a file.
 * @filename: points to the filename.
 * @text_content: NULL string to be written to the file.
 * Return: 1, when successful. -1, when it fails.
 */

int create_file(const char *filename, char *text_content)
{
	int file;
	ssize_t wr;

	if (filename == NULL)
		return (-1);

	file = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (file == -1)
		return (-1);

	if (text_content)
	{
		size_t len = strlen(text_content);

		wr = write(file, text_content, len);
		if (wr != (ssize_t)len)
		{
			close(file);
			return (-1);
		}
	}

	close(file);
	return (1);
}
