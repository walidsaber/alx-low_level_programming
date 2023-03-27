#include "main.h"

/**
 * *_strcpy - cpy
 * @dest: dest
 * @src: src
 * Return: dest
 */

char *_scrcpy(char *dest, char *src)
{
	int i = -1;

	do {
		i++;
		dest[i] = src[i];
	} while (src[i] != '\0');

	return (dest);
}
