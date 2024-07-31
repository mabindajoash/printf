#include "main.h"
/**
  * unsigned_integer - output an unsigned int
  * @number: Number to be passed
  * Return: number of bytes
  */
int unsigned_integer(unsigned int number)
{
	char buffer[BUFFER_SIZE];
	unsigned int i = 0;
	unsigned int j;
	char temp;

	if (number == 0)
		return (write_char('0'));
	while (number > 0)
	{
		buffer[i++] = (number % 10) + '0';
		number /= 10;
	}
	for (j = 0; j < i / 2; j++)
	{
		temp = buffer[j];
		buffer[j] = buffer[i - j - 1];
		buffer[i - j - 1] = temp;
	}
	buffer[i] = '\0';
	return (write_string(buffer));
}
