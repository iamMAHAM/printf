#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * struct func_spec - a structure for format specifier associated by a function
 * @s: the string specifier
 * @func_ptr: a pointer to func associated by s
 */
typedef struct func_spec
{
	char *s;
	int (*func_ptr)(va_list);
} func_spec;

int _printf(const char *format, ...);
int _putchar(char c);
int (*get_func(const char *format))(va_list);
int print_char(va_list args);
int print_str(va_list args);
int print_pct(va_list args);
int print_dec(va_list args);

#endif
