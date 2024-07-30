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
  * write_string - output a string to the standard output
  * @names: The string to be passed
  * Return: Number of bytes written in the standard output
  */
int write_string(char *names)
{
	if (names != NULL)
	{
		(write(1, names, strlen(names)));
		return (strlen(names));
	}
	else
	{
		return (write(1, "null", 6));
	}
}
