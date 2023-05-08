#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - prints file to POSIX stdout.
 * @filename: pointer to the file.
 * @letters: num of letters.
 * Return: count.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t r, w, o, count;
	char *textholder;

	textholder = malloc(letters);
	if (textholder == NULL)
		return (0);
	o = open(filename, O_RDONLY);
	r = read(o, textholder, letters);
	w = write(STDOUT_FILENO, textholder, r);
	if (w == -1 || w != r)
	{
		free(textholder);
		return (0);
	}
	count = w;
	free(textholder);
	close(o);
	return (count);
}
