#include "main.h"

/**
 *print_char - prints character
 *@args: argument
 *
 *Return: character
 */

int print_char(va_list args)
{

	_putchar(va_arg(args, int));
	return (1);
}

/**
 *print_str - prints string
 *@args: arguments
 *Return: string
 */

int print_str(va_list args)
{

	int x;
	char *str = va_arg(args, char *);

	if (str == NULL)
		str = "(null)";
	for (x = 0; str[x]; x++)
	{
		_putchar(str[x]);
	}
	return (x);
}
