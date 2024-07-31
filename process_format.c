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
	int num;
	unsigned int bin;
	unsigned int hexadecimal;
	unsigned int unum;
	unsigned int HEXADECIMAL;
	unsigned int onum;
	char *str;

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
		case ('i'):
		case ('d'):
			num = va_arg(print, int);
			counter += integer(num);
			break;
		case ('b'):
			bin = va_arg(print, unsigned int);
			counter += binary(bin);
			break;
		case ('u'):
			unum = va_arg(print, unsigned int);
			counter += unsigned_integer(unum);
			break;
		case ('x'):
			hexadecimal = va_arg(print, unsigned int);
			counter += hex(hexadecimal);
			break;
		case ('X'):
			HEXADECIMAL = va_arg(print, unsigned int);
			counter += HEX(HEXADECIMAL);
			break;
		case ('o'):
			onum = va_arg(print, unsigned int);
			counter += octal(onum);
			break;
		case ('r'):
			str = va_arg(print, char*);
			write_string(reverse(str));
			free(reverse(str));
			counter += calculate_lenght(str);
			break;
		default:
			write_char('%');
			write_char(*format);
			break;
	}
	return (counter);
}
