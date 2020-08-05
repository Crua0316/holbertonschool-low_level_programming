#include "holberton.h"

/**
 * create_file - create_file
 * @filename: Name of file
 * @text_content: content
 *
 * Return: 1
 */

int create_file(const char *filename, char *text_content)
{
	int a, b, c;

	if (!filename)
	{
		return (-1);
	}
	a = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (a == -1)
	{
		return (-1);
	}
	if (!text_content)
	{
		close(a);
		return (1);
	}
	while (text_content[c])
	{
		c++;
	}
	b = write(a, text_content, c);
	if (b == -1)
	{
		return (-1);
	}
	close(a);
	return (1);
}
