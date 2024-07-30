#include "main.h"
/**
  * process_format - processes the format specifiers
  * @format: The format specifier
  * @print: The argument
  * Return: Number of characters printed
  */
int process_format(const char *format, va_list print)
{
	int counter = 0;
	char name;
	char *names;

	switch (*format)
	{
		case ('%'):
			counter += write_char('%');
			break;
		case ('c'):
			name = va_arg(print, int);
			counter += write_char(name);
			break;
		case ('s'):
			names = va_arg(print, char*);
			counter += write_string(names);
			break;
		default:
			write_char('%');
			write_char(*format);
			break;
	}
	return (counter);
}
