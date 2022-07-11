#include "main.h"

/**
 * print_dec - prints decimal
 * @args: the argument decimal
 *
 * Return: counter
 */

int print_dec(va_list args)
{
	int value;
	unsigned int abs, a, len;
	unsigned int countn = 1;

	len = 0;

	value = va_arg(args, int);
