#include <stdarg.h>
#include <stdio.h>
#include "main.h"
/**
 * print_S - prints a string and nonprintable character ascii values
 * @args: the list of args
 * Return: number of chars printed
 */
int print_S(va_list args)
{
	unsigned int i;
	int total = 0;
	char *str = va_arg(args, char *);

	if (str == NULL)
		str = "(null)";
	for (i = 0; str[i]; i++)
	{
		if (str[i] < 32 || str[i] >= 127)
		{
			_putchar('\\');
			_putchar('x');
			total += 2;
			total += print_hex(str[i]);
		}
		else
		{
			_putchar(str[i]);
			total++;
		}
	}
	return (total);
}
