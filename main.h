#ifndef _MAIN_H_
#define _MAIN_H_

/*Libraries*/
#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

/*Prototypes*/
int _printf(const char *format, ...);
int print_num(long int n);
int print_string(char *str);
int print_binary(unsigned int num);
int print_unknown_spec(char c);
int print_odh(char c, unsigned int num);
int dec_to_oct(unsigned int num);
int dec_to_hex(char c, unsigned int num);
int print_S(char *);
int print_reverse(char *s);
int print_rot13(char *c);
int print_pointer(void *p);

/*Auxilliary Prototype*/
int _putchar(char c);


#endif
