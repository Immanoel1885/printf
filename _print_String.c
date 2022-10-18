#include "main.h"
#include "_write_char.c"

/**
<<<<<<< HEAD
 * print_String - prints special characters as \x
 * followed by ascii code in upper case
=======
 * print_String - Prints special characters as \x
 * followed by ascii code in upper case
>>>>>>> c4454e7fe5bcc781d77d47a6b6104289d2491614
 * @list: the list of arguments
 * Return: the number of printed characters
 */

int print_String(va_list list)
{
int i;
char *str;
int count = 0;
  
str = va_arg(list, char *);
  
if (str == NULL)
{
str = "(null)";
}
for (i = 0; str[i] != '\0'; i++)
{
if (str[i] < 32 || str[i] >= 127)
{
_write_char('\\');
_write_char('x');
count += 2;
count += _print_heX(str[i]);
}
else
{
_write_char(str[i]);
count++;
}
}
return (count);
}

