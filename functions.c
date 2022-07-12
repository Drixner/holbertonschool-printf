#include "main.h"

/**
 *print_char - prints character
 *@args: argument
 *
 *Return: character
 */

/*calling the function _putchar*/
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
	/*loop validating each character of the strig*/
	for (x = 0; str[x]; x++)
	{
		_putchar(str[x]);
	}
	return (x);
}

/**
 *print_pct - prints character "%"
 *@args : arguments
 *
 *Return: character "%"
 */

int print_pct(va_list args)
{
	(void)args;/*returns character percentage*/
	return (write(1, "%", 1));
}
