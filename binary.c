#include "main.h"
/**
  * binary - convert to binary
  * @number: Number to be converted
  * Return: number of bytes
  */
int binary(unsigned int number)
{
	char buffer[12];
	int i = 0;

	if (number == 0)
	{
	return (write_char('0'));
	}
	while (number)
	{
		buffer[i++] = (number % 2) + '0';
		number /= 2;
	}
	buffer[i] = '\0';
	reverse_string(buffer, i);
	return (write_string(buffer));
}
