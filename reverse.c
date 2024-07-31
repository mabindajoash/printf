#include "main.h"

/**
  * reverse - reverse a string and print it
  * @str: takes in a string
  * Return: a pointer to the new string
  */
char *reverse(char *str)
{
	char *s;
	int i;
	int j;
	int len = strlen(str);

	if (str == NULL)
		return (NULL);
	s = malloc(sizeof(char) * len + 1);
	if (s == NULL)
		return (NULL);
	for (i = len - 1, j = 0; i >= 0; i--, j++)
	{
		s[i] = str[j];
	}
	s[len] = '\0';
	return (s);
}
