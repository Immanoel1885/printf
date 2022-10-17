SYNOPSIS
This is an implementation of the printf function that prints formatted data

DESCRIPTION
The _printf() function prints data to the standard output according to a specific format.
It also returns the count of the number of printed characters;

The available convertion specifiers are:

1. %c: Prints a single character.
2. %s: Prints a string of characters.
3. %d: Prints integers.
4. %i: Prints integers.
5. %b: Prints the binary representation of an unsigned decimal.
6. %u: Prints unsigned integers
7. %x: Prints the hexadecial representation of an unsigned decimal in lowercase letters
8. %X:Prints the hexadecial representation of an unsigned decimal in uppercase letters
9. %r: Prints a reversed string
10. %R: Prints the Rot13 interpretation of a string

USAGE

* All the files are to be compiled on Ubuntu 14.04 LTS
* Compile your code with gcc -Wall -Werror -Wextra -pedantic *.c
* Include the "holberton.h" header file on the functions using the _printf() Example
