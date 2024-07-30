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
	int j;
	char temp;

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
	for (j = 0; j < i / 2; j++)
	{
		temp = buffer[j];
		buffer[j] = buffer[i - 1 - j];
		buffer[i - 1 - j] = temp;
	}
	buffer[i] = '\0';
	(write_string(buffer));
	return (calculate_lenght(buffer));
}
