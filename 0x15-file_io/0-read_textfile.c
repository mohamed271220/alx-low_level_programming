#include "main.h"

/**
* read_textfile - reads a text file and prints it to the POSIX standard output
* @filename: the file to read
* @letters: the number of letters it should read and print
* Return: the actual number of letters it could read and print
*/


ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;

	ssize_t bytes;
	char buf[READ_BUF_SIZE * 8];


	if (filename == NULL)
	{
		return (0);
	}
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		return (0);
	}
	bytes = read(fd, buf, letters);
	if (bytes == -1)
	{
		return (0);
	}
	bytes = write(STDOUT_FILENO, buf, bytes);
	close(fd);
	return (bytes);

}

