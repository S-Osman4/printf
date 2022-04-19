#ifndef MAIN_H
#define MAIN_H

/* Libraries */
#include <stdio.h>
#include <limits.h>
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

/**
* struct base- struct token.
*@op: The identifier argument.
* @f: The base function.
*/
typedef struct base
{
	char *op;
	int (*f)(va_list p);
} base_t;

/* General Prototypes */
int _printf(const char *format, ...);
int selector(int *i, const char *format, va_list x);

/* Basic Operator Prototypes */
int op_char(va_list p);
int op_string(va_list p);
int op_percent(va_list __attribute__((unused)) p);
int op_numbers(va_list arg);

/* Auxiliary Prototypes */
int _putchar(char c);

#endif
