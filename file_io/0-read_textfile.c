#include "main.h"
/**
 * read_textfile - reads a text file and prints it to the POSIX standard
 *output.
 * @filename: pointer of filename to be created
 * @letters: number of letters it should read and print
 *
 * Return: actual numbers of letters it should read and print
 * if filename NULL, if write fails or does notwrite the expected amount of
 *bytes, return 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	void *buf = malloc(letters + 1);
	int fd;

	if (!(filename))
		return (0);

	fd = open(filename, O_RDWR, 0600);
	if (fd == -1)
		return (0);

	return (write(1, buf, read(fd, buf, letters)));
}
