#include "main.h"
/**
  * binary - convert to binary
  * @number: Number to be converted
  * Return: number of bytes
  */
int binary(int number)
{
	char buffer[12];
	int i = 0;

	if (number == 0)
	{
		write_char('0');
		return (1);
	}
	while (number > 0)
	{
		buffer[i++] = (number % 2) + '0';
		number = number / 2;
	}
	buffer[i] = '\0';
	(write_string(buffer));
	return (calculate_lenght(buffer));
}
