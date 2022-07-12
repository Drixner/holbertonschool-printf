#include "main.h"

/**
 * get_func-check for valid
 * @format: a character to check
 * Return: a pointer to the function
 */
int (*get_func(const char *format))(va_list)
{
	int y;
	/*function list containing specifiersi*/
	func_t p[] = {
		{"c", print_char},
		{"s", print_str},
		{"%", print_pct},
		{"d", print_dec},
		{"i", print_dec},
		{NULL, NULL}
	};
	
	/*Validate input*/
	for (y = 0; p[y].t; y++)
	{
		if (*format == *(p[y].t))
		{
			return (p[y].f);
		}
	}
	return (NULL);
}
