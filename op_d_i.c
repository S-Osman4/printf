#include "main.h"
/**
* op_numbers - main function
* @arg: The argument pointer.
* Description: This function prints Integrers and Decimals.
* Return: 0.
*/
int op_numbers(va_list arg)
{
    unsigned int i, p, r;
  
    int n = va_arg(arg, int), count = 0;
  
    if (n < 0)
    {
        _putchar('-');
        count++;
        i = n * -1;
    }
    else
    {
       i = n;
    }
  
    p = 1;
    r = i;
  
  
  while (r > 9)
  {
      p *= 10;
      r /= 10;
  }
  
  for (; p >= 1; p /= 10)
  {
      _putchar(((i / p) % 10) + '0');
      count++;
  }
  return (count);
}
  
  
