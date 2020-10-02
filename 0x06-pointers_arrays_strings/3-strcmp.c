#include "holberton.h"
/**
 * _strcmp - compares two strings
 * @s1: input parameter
 * @s2: input parameter
 *
 * Return: 0 if equal or b if is different
 */
int _strcmp(char *s1, char *s2)
{
	int h = 0;
	int o = 0;

	while (s1[h] != '\0' && o == 0)
	{
		o = s1[h] - s2[h];
		h++;
	}
	return (o);
}
