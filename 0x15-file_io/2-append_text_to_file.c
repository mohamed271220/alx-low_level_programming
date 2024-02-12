#include "main.h"

/**
* append_text_to_file - appends text to a file
* @filename: the file to append to
* @text_content: the content to append
* Return: 1 on success, -1 on failure
*/


int append_text_to_file(const char *filename, char *text_content)
{
	int fd;

	ssize_t bytes;
	int i;

	if (filename == NULL)
	{
		return (-1);
	}
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
	{
		return (-1);
	}
	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}
	for (i = 0; text_content[i] != '\0'; i++)
		;
	bytes = write(fd, text_content, i);
	if (bytes == -1)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}
