#include "main.h"
/**
  * write_char - output a character
  * @c: character to be outputted
  * Return: Number of characters to the standard output
  */
int write_char(char c)
{
	return (write(1, &c, 1));
}
/**
  * calculate_lenght - calculates the lenght of the string
  * @str: string to be passed
  * Return: the lenght
  */
int calculate_lenght(char *str)
{
	int len = 0;
	while (str[len])
		len++;
	return (len);
}
/**
  * write_string - output a string to the standard output
  * @names: The string to be passed
  * Return: Number of bytes written in the standard output
  */
int write_string(char *names)
{
	if (names != NULL)
	{
		(write(1, names, calculate_lenght(names)));
		return (calculate_lenght(names));
	}
	else
		return (0);
}
