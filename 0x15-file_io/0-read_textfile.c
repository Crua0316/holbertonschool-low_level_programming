#include "holberton.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX.
 * @filename: Name file
 * @letters: Letters
 *
 * Return: Read
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int f_d = 0,
	    read_d = 0,
	    write_e = 0;
	char *buff;

	if (!filename)
		return (0);

	f_d = open(filename, O_RDONLY);
	if (f_d == -1)
		return (0);

	buff = malloc(letters * sizeof(char));
	if (!buff)
		return (0);

	read_d = read(f_d, buff, letters);
	if (read_d == -1)
		return (0);

	write_e = write(STDOUT_FILENO, buff, read_d);
	if (write_e < 0)
		return (0);

	free(buff);
	close(f_d);
	return (read_d);
}
