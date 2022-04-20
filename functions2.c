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
 * Return: number of chars printed (always 2)
 */
int hex_print(char c)
{
	int total;
	char diff = 'A' - ':';
	char d[2];

	d[0] = c / 16;
	d[1] = c % 16;
	for (total = 0; total < 2; total++)
	{
		if (d[total] >= 10)
			_putchar('0' + diff + d[total]);
		else
			_putchar('0' + d[total]);
	}
	return (total);
}

/**
 * print_pointer - prints an address
 * @args: the list of args
 * Return: number of characters to print
 */
int print_pointer(va_list args)
{
	int total = 0;
	unsigned int a[16];
	unsigned int i, sum;
	unsigned long n, m;
	char *str = "(nil)";

	n = va_arg(args, unsigned long);
	if (n == 0)
	{
		for (i = 0; str[i]; i++)
		{
			_putchar(str[i]);
			total++;
		}
		return (total);
	}
	_putchar('0');
	_putchar('x');
	total = 2;
	m = _pow(16, 15);
	a[0] = n / m;
	for (i = 1; i < 16; i++)
	{
		m /= 16;
		a[i] = (n / m) % 16;
	}
	for (i = 0, sum = 0; i < 16; i++)
	{
		sum += a[i];
		if (sum || i == 15)
		{
			if (a[i] < 10)
				_putchar('0' + a[i]);
			else
				_putchar('0' + ('a' - ':') + a[i]);
			total++;
		}
	}
	return (total);
}
