#include "holberton.h"

/**
 * main - copies the content of a file to another file
 * @ac: count of argument
 * @av: arrays of argument
 *
 * Return: 0
 */


int main(int ac, char **av)
{
	int fl_from, fl_to, fl_r, fl_w;
	char buff[1024];

	if (ac != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	fl_from = open(av[1], O_RDONLY);
	if (fl_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]), exit(98);
	}
	fl_to = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fl_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]), exit(99);
	}
	do {
		fl_r = read(fl_from, buff, 1024);
		fl_w = write(fl_to, buff, fl_r);
	} while (fl_r == 1024);
	if (fl_r == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]), exit(98);
	}
		if (fl_w == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]), exit(99);
	}
	if (close(fl_from) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fl_from), exit(100);
	if (close(fl_to) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fl_to), exit(100);
	return (0);
}
