#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX stdout.
 * @filename: points to the name of the file.
 * @letters: number of letters the function should read and print.
 * Return:  the actual number of letters the function could read and print.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file, rd, wr;
	char *buf;

	if (filename == NULL)
		return (0);

	file = open(filename, O_RDONLY);
	if (file == -1)
		return (0);

	buf = malloc(sizeof(char) * letters + 1);
	if (buf == NULL)
	{
		close(file);
		return (0);
	}

	rd = read(file, buf, letters);
	if (rd == -1)
	{
		close(file);
		free(buf);
		return (0);
	}

	buf[letters] = '\0';

	wr = write(STDOUT_FILENO, buf, rd);
	if (wr == -1)
	{
		close(file);
		free(buf);
		return (0);
	}

	close(file);
	free(buf);
	return (wr);
}
