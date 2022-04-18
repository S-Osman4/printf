#include "main.h"
#include <stdarg.h>
#include <stdio.h>
int _printf(const char *format, ...)
{
	int count=0;
	va_list args;
	va_start(args, format);

		while(*(format+count) != '\0')
			count++;
	va_end(args);
	
	return (count);
	
}
