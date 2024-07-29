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
	char name;
	char *names;

	if (format == NULL)
		return (-1);
	va_start(print, format);
	while (*format)
	{
		if (*format != '%')
		{
			write(1, format, 1);
			counter++;
		}
		else 
		{
			format++;
			switch(*format)
			{
				case ('%'):
					write(1, format, 1);
					counter++;
					break;
				case ('c'):
					name = va_arg(print, int);
					write(1, &name, 1);
					counter++;
					break;
				case ('s'):
					names = va_arg(print, char*);
					if (names != NULL)
					{
						write(1, names, strlen(names));
						counter += strlen(names);
					}
					else
					{
						write(1, "(null)", 6);
						counter += 6;
					}
					break;
				default:
					write(1, "%", 1);
					write(1, format, 1);
					counter += 2;
					break;
			}
		}
		format++;
	}
	va_end(print);
	return (counter);
}
