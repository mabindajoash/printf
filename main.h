#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <string.h>
#include <stdio.h>
#include <unistd.h>
int _printf(const char *format, ...);
int process_format(const char *format, va_list print);
int write_char(char c);
int write_string(char *str);
int integer(int num);
int calculate_lenght(char *str);
#endif
