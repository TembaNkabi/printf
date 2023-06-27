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
		if (format[i] == '%')
		{
			format++;
		switch (format[i])
		{
			case 'c':
				_putchar(va_arg(formats, int));
				returnValue++;
				break;
			case 's':
				_puts(va_arg(formats, char *));
				returnValue += _strlen(va_arg(formats, char *));
				break;
			case '%':
				_putchar('%');
				returnValue++;
				break;
			default:
				break;
		}
		}
		else
		{
			_putchar(format[i]);
			returnValue++;
		}
		format++;
	}
	va_end(formats);
	return (returnValue);
}
