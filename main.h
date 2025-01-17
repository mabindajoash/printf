#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#define BUFFER_SIZE 1024
int _printf(const char *format, ...);
int process_format(const char *format, va_list print);
int write_char(char c);
int write_string(char *str);
int integer(int num);
int binary(unsigned int number);
int unsigned_integer(unsigned int number);
char *reverse_string(char *buffer, int size);
int hex(unsigned int num);
int HEX(unsigned int num);
char *reverse(char *str);
int octal(unsigned int num);
int calculate_lenght(char *str);
#endif
