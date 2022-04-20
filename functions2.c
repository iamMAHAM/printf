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
			total += hex_print(str[i]);
		}
		else
		{
			_putchar(str[i]);
			total++;
		}
	}
	return (total);
}

/**
 * hex_print - prints a char's ascii value in uppercase hex
 * @c: char to print
 *
 * Return: number of chars printed (always 2)
 */
int hex_print(char c)
{
	int count;
	char diff = 'A' - ':';
	char d[2];

	d[0] = c / 16;
	d[1] = c % 16;
	for (count = 0; count < 2; count++)
	{
		if (d[count] >= 10)
			_putchar('0' + diff + d[count]);
		else
			_putchar('0' + d[count]);
	}
	return (count);
}
