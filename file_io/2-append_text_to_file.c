#include "main.h"
#include <string.h>
/**
 * append_text_to_file - appends text at the end of a file
 * @filename: name of the file to create
 * @text_content: NULL terminated string to write to the file
 * Created file must have rw------- permissions. If the file already exists,
 * do not create the file if it does not exist
 * If text_content is NULL, do not add anything to the file
 *
 * Return: 1 on succes, -1 on failure(file can not be created,
 * file can not be written, write fails, permissions fails, etc)
 * if filename is NULL, return -1
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;

	if (!(filename))
		return (-1);
	fd = open(filename, O_APPEND | O_WRONLY);
	if (fd == -1)
		return (-1);
	if (text_content)
		write(fd, text_content, strlen(text_content));
	return (1);
}
