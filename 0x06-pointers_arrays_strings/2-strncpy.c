#include "holberton.h"
/**
 * _strncpy - copy string
 * @dest: array that returns
 * @src: the pointer that receive the string
 * @n: times to interate
 *
 * Return: the parameter dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int h;

	h = 0;
	while (h < n && src[h] != '\0')
	{
		dest[h] = src[h];
		i++;
	}

	h = h;
	while (h < n)
	{
		dest[h] = '\0';
		h++;
	}
	return (dest);
}
