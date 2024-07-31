#include "main.h"
/**
  * integer - output an integer to the standard output
  * @num: number passed into the function
  * Return: number of characters
  */
int integer(int num)
{
	int i = 0;
	char buffer[BUFFER_SIZE];
	int lenght = 0;

	if (num < 0)
	{
		write_char('-');
		num = -num;
		lenght++;
	}
	do{
		buffer[i] = (num % 10) + '0';
		num = num / 10;
		i++;
	} while (num != 0);
	buffer[i] = '\0';
	reverse_string(buffer, i);
	write_string(buffer);
	return (calculate_lenght(buffer) + lenght);
}
