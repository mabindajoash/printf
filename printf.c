#include "main.h"
/**
  * _printf - produces output according to format
  * @format: character string
  * Return: number of characters printed
  */
int _printf(const char *format, ...)
{
	va_list print;
	int counter = 0;

	if (format == NULL)
		return (-1);
	va_start(print, format);
	while (*format)
	{
		if (*format != '%')
		{
			counter += write_char(*format);
		}
		else
		{
			format++;
			counter += process_format(format, print);
		}
		format++;
	}
	va_end(print);
	return (counter);
