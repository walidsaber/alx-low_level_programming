#include "main.h"

/**
 * append_text_to_file - add more text at EOF
 * @filename: file's name.
 * @text_content: content
 * Return: 1 for success, -1 if fails
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int o, w, size = 0, flags = O_WRONLY | O_APPEND;

	if (filename == NULL || text_content == NULL)
		return (-1);
	while(text_content[size])
		size++;
	o = open(filename, flags);
	w = write(o, text_content, size);
	if (o == -1 || w == -1)
		return (-1);
	close(o);
	return (1);
}
