#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include "main.h"

/**
 * _printf - a function similar to printf
 * @format: the strings to be formatted
 * @...: the other param
 * Return: the length of printed str
 */
int _printf(const char *format, ...)
{
	va_list args;
	int (*f_ptr)(va_list);
	int i = 0, printed_length = 0, format_length = 0;

	format_length = strlen(format);
	va_start(args, format);
	if ((!format) || (format[i] == '%' && !format[1]))
		return (-1);
	else if (format[0] == '%' && (format[1] == ' ' && !format[2]))
		return (-1);

	for (; i < format_length; i++)
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
			printed_length++;
		}
		else if (format[i] == '%')
		{
			i++;
			f_ptr = get_func(&format[i]);
			printed_length += f_ptr(args);

		}
	}
	return (printed_length);
}
