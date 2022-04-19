#ifndef _MAIN_H_
#define _MAIN_H_

/*Libraries*/
#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

/*Prototypes*/
/**
 *struct print_func - struct to select specific print function
 *@print_ft: format specifier
 *@p_func: pinter to function
 */
typedef struct print_func
{
	char print_ft;
	int (*p_func)(va_list l);
} pr_f;
int _printf(const char *format, ...);
int _puts(const char *);
void check_for_modifiers(const char *, va_list, int *, int *);
int check_for_modifier(const char *format);
int _puts_count(const char *, int);
int print_number(int);
int print_in_base(unsigned long int, char);
int _puts_special(const char *);
int print_num_up_to_10(int, int, char);

/*Auxilliary Prototype*/
int _putchar(char c);


#endif
