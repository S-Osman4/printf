#include "main.h"
/**
*_strlen - returns the length of a strngs.
*@s: input string
*Return: Length of  string
*/
int_strlen(char *s)
{
	int count = 0;

	while (*(s + count) != '\0')
		count++;
	return (count);
}
