#include "main.h"
/**
  * unsigned_integer - output an unsigned int
  * @number: Number to be passed
  * Return: number of bytes
  */
int unsigned_integer(unsigned int number)
{
	char buffer[BUFFER_SIZE];
	int i = 0;

	if (number == 0)
		return (write_char('0'));
	while (number > 0)
	{
		buffer[i++] = (number % 10) + '0';
		number /= 10;
	}
	reverse_string(buffer, i);
	return (write_string(buffer));
}
/**
  * hex - output number in hexadecimal form
  * @num: number to be formatted
  * Return: Number of bytes
  */
int hex(unsigned int num)
{
	int i = 0;
	char buffer[BUFFER_SIZE];
	char digit[] = {'0', '1', '2', '3', '4', '5', '6', '7',
			'8', '9', 'a', 'b', 'c', 'd', 'e', 'f'};

	if (num == 0)
		return (write_char('0'));
	while (num > 0)
	{
		buffer[i++] = digit[num % 16];
		num /= 16;
	}
	reverse_string(buffer, i);
	return (write_string(buffer));
}
/**
  * reverse_string - reverse the string input
  * @buffer: string to be reversed
  * @size: size of string
  * Return: reversed string
  */
char *reverse_string(char *buffer, int size)
{
	char temp;
	int i;

	for (i = 0; i < size / 2; i++)
	{
		temp = buffer[i];
		buffer[i] = buffer[size - i - 1];
		buffer[size - i - 1] = temp;
	}
	buffer[i] = '\0';
	return (buffer);
}
/**
  * HEX - output number in HEXADECIMAL form
  * @num: number to be parsed
  * Return: number of bytes
  */
int HEX(unsigned int num)
{
	char digit[] = {'0', '1', '2', '3', '4', '5', '6', '7',
			'8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};
	int i = 0;
	char buffer[BUFFER_SIZE];

	while (num)
	{
		buffer[i++] = digit[num % 16];
		num /= 16;
	}
	reverse_string(buffer, i);
	return (write_string(buffer));
}
/**
  * octal - output numbers in octal
  * @num: number to be converted
  * Return: number of bytes
  */
int octal(unsigned int num)
{
	char digit[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8'};
	int i = 0;
	char buffer[BUFFER_SIZE];

	while (num)
	{
		buffer[i++] = digit[num % 8];
		num /= 8;
	}
	reverse_string(buffer, i);
	return (write_string(buffer));
}
