#include "main.h"
/**
  * integer - output an integer to the standard output
  * @num: number passed into the function
  * Return: number of characters
  */
int integer(int num)
{
	int i = 0;
	int j;
	char temp;
	char buffer[12];
	int lenght = 0;

	if (num < 0)
	{
		write_char('-');
		num = -num;
		lenght++;
	}
	do
	{
		buffer[i] = (num % 10) + '0';
		num = num / 10;
		i++;
	}while (num != 0);
	for (j = 0; j < i / 2; j++)
	{
		temp = buffer[i - 1 - j];
		buffer[i - 1 - j] = buffer[j];
		buffer[j] = temp;
	}
	write_string(buffer);
	return (calculate_lenght(buffer) + lenght);
}
