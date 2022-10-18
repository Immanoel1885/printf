#include "main.h"

static int hex_print(char c);

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
count += hex_print(str[i]);
}
else
{
_write_char(str[i]);
count++;
}
}
return (count);
}

/**
 * hex_print - prints a chars ascii value in upper case hex
 * @c: char to print
 *
 * return: number of chars printed
 */
static int hex_print(char c)
{
	int count;
	char diff = 'A' - ':';
	char d[2];

	d[0] = c / 16;
	d[1] = c % 16;
	for (count = 0; count < 2; count++)
	{
		if (d[count] >= 10)
			_write_char('0' + diff + d[count]);
		else
			_write_char('0' + d[count]);
	}
	return (count);
}
