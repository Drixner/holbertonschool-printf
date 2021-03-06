#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>


/**
 * struct func_type - type structure
 * @t: pointer to the argument
 * @f: pointer-function associated with the argument
 */

 /*defining structure*/
typedef struct func_type
{
	char *t;
	int (*f)(va_list);
} func_t;

/*prototypes*/
int (*get_func(const char *format))(va_list);
int _putchar(char c);
int _printf(const char *format, ...);
int print_str(va_list args);
int print_char(va_list args);
int print_pct(va_list args);
int print_dec(va_list args);

#endif
