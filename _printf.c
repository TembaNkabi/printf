#include <stdarg.h>
#include "main.h"
#include <stdlib.h>
/**
 * _printf - This function prints an output depending on the format specified
 * @format: Character string
 * Return: Returns the output/printed characters
 */
int _printf(const char *format, ...)
{
	unsigned int i;
	int returnValue = 0;
	va_list formats;

	va_start(formats, format);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
			_putchar(format[i]);
		else if (format[i + 1] == 'c')
		{
			_putchar(va_arg(formats, int));
			i++;
		}
		else if (format[i + 1] == 's')
		{
			_puts(va_arg(formats, char *));
			i++;
		}
		else if (format[i + 1] == '%')
		{
			_putchar(format[i]);
			i++;
		}
	}
	return (returnValue);
	va_end(formats);
}
