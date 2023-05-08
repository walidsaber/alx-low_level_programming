#include "main.h"


/*
 * create_file - creates a file
 * @filename: the file's name.
 * @text_content: the content of the text
 * Return: size, and -1 if failed
 */
int create_file(const char *filename, char *text_content)
{
	ssize_t o, w, size = 0;
	char *t = text_content;
	int fileflags = O_CREAT | O_RDWR | O_TRUNC;

	if (t == NULL)
		return (-1);
	while (t[size])
		size++;
	o = open(filename, fileflags, 0600);
	w = write(o, t, size);
	if (o == -1 || w == -1)
		return (-1);
	close(o);
	return (1);
}
