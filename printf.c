#include "main.h"

/**
 * _printf - Produces output according to a format.
 * @format: Character string
 * Return: number of characters printed.
 */

int _printf(const char *format, ...)
{
	va_list ap;
	int i = 0, count = 0;

	va_start(ap, format);

	while (format[i] != '\0')
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
			i++;
			count++;
		}
		else
		{
			switch (format[i + 1])
			{
				case 'c':
					_putchar(va_arg(ap, int));
					count += 1;
					break;
				case 's':
					count += print_string(va_arg(ap, char *));
					break;
				case '%':
					_putchar('%');
					count += 1;
					break;
				default:
					break;
			};
			i += 2;
		}
	}
	va_end(ap);
	return (count);
}
