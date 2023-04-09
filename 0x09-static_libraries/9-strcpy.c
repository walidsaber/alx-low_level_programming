#include "main.h"

/**
 * *_strcpy -  cpy
 * @dest: dest
 * @src: src
 * Description: "copy"
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int i = -1;

	do {
		i++;
		dest[i] = src[i];
	} while (src[i] != '\0');

	return (dest);
}
