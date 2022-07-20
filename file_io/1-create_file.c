#include "main.h"
#include <string.h>
/**
 * create_file - creates a file
 * @filename: name of the file to create
 * @text_content: NULL terminated string to write to the file
 * Created file must have rw------- permissions. If the file already exists,
 * do not change the permissions.
 * If the file already exists, truncate it
 * If text_content is NULL, create an empty file
 *
 * Return: 1 on succes, -1 on failure(file can not be created,
 * file can not be written, write fails, etc)
 * if filename is NULL, return -1
 */

int create_file(const char *filename, char *text_content)
{
	int fd;

	if (!(filename))
		return (-1);
	fd = creat(filename, 0600);
	if (fd == -1)
		return (-1);
	if (text_content)
		write(fd, text_content, strlen(text_content));
	return (1);
}
