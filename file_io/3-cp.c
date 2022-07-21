#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * main - Entry point, copies the content of a file to another file
 * @argc: number of arguments
 * @argv: array of strings(arguments)
 * If the number of args is not the correct one, exit(97) and print
 * Usage: cp file_from file_to, +\n to the standar error
 * If file_to already exists, truncate it
 * If file_from does not exist, or if it can't be red, exit(98) and print
 * Error: Can't read from file NAME_OF_THE_FILE, +\n, on STDERR_FILENO
 * if you can not create or if write to file_to fails, exit with code 99 and
 * print Error: Can't write to NAME_OF_THE_FILE, followed by a new line, on the
 * POSIX standard error
 * if you can not close a file descriptor , exit with code 100 and print
 * "Error: Can't close fd FD_VALUE", followed by a new line,
 * on the standard error
 * Permissions of the created file: rw-rw-r--. If the file already exists,
 * do not change the permissions
 * You must read 1,024 bytes at a time from the file_from to make less
 * system calls. Use a buffer
 * You are allowed to use dprintf
 * Return: 0
 */

int main(int argc, char *argv[])
{
	char buffer[1024];
	int fd, fd2, wr, cl, rd = -1;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n",
			argv[1]);
		exit(98);
	}
	while (rd != 0)
	{
		if (rd == -1)
			fd2 = creat(argv[2], 0664);
		rd = read(fd, buffer, 1024);
		wr = write(fd2, buffer, rd);
	}
	if ((fd2 == -1) | (wr == -1))
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	cl = close(fd);
	close(fd2);
	if (cl == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
	return (0);
}
