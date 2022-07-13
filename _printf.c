#include <stdarg.h>
#include "main.h"
#include <stdio.h>

/**
 * _printf - a remake of the original printf function
 *
 * @format: the string to be printed
 *
 * Return: the number of string printed
 */

int _printf(const char *format, ...)
{
	int a, i = 0, num = 0;
	char c, *s;

	va_list(ap);

	va_start(ap, format);


	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			switch (format[i + 1])
			{
				case 'c':
					c = va_arg(ap, int);
					num += printchar(c);
					i += 2;
					break;
				case 's':
					s = va_arg(ap, char*);
					num += printstr(s);
					i += 2;
					break;
				case '%':
					num += printchar('%');
					i += 2;
					break;
				default:
					break;

			}
		}
		num += printchar(format[i]);
		i++;
	}

	va_end(ap);
	return (num - 1);
}
