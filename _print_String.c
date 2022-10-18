#include "main.h"

/**
 * print_String - prints out a string, with non printable chracters printed, thus
 * \x, followed by ASCII value in hexadecimal in uppercase, always 2 characters
 * @list: the list of arguments
 * Return: the number of printed characters
 */

int print_String(va_list list)
{
  int i;
  char *str;
  int count = 0;
  
  str = va_arg(list, char *);
  
  if (str[i] == NULL)
  {
    str = "(null)";
  }
  for (i = 0; str[i] != '\0'; i++)
  {
    if (str[i] >= 32 && str[i] <= 47 || str[i] >= 58 && str[i] <= 64 || str[i] >= 91 && str[i] <= 96 || str[i] >= 123 && str[i] <= 126)
        {
          _write_char("\\");
          _write_char("x");
          count += 2;
          count += print_hex(str[i]);
        }
    else
        {
          _write_char(str[i]);
          count++;
        }
  }
  return (count);
}

