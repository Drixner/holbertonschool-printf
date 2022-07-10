#include "main.h"

/**
 * get_func - check for valid
 * @format: a character to check
 * Return: a pointer to the function
 */
int (*get_func(const char *format))(va_list)
{
	int y;
	func_t p[] = {
		{"c", print_char},
		{"s", print_str},
		{"%", print_pct},
		{NULL, NULL}
	};

	for (y = 0; p[y].t; y++)
	{
		if (*format == *(p[y].t))
		{
			return (p[y].f);
		}
	}
	return (NULL);
}
