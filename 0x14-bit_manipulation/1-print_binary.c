#include "holberton.h"
/**
 * print_binary - prints the binary representation of a number
 * @n: a string of 0 and 1 chars
 *
 */
void print_binary(unsigned long int n)
{
	int printbin = ((n & 1) + '0');

	if (n > 1)
	{
		print_binary(n >> 1);
	}
	_putchar(printbin);
}
