#include "holberton.h"
/**
 * _strcat - concatenates two strings
 * @dest: input parameter string
 * @src: input parameter string
 *
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int h;
	int o;

	h = 0;

	while (dest[h] != 0)
	{
		h++;
	}

	o = 0;

	while (src[o] != 0)
	{
		dest[h] = src[o];
		h++;
		o++;
	}
	return (dest);
}
