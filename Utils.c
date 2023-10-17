#include "main.h"

/**
 * is_printable - a fun that evaluates if a char is printable
 * @c: a char to be evaluated
 * Return: 1 if c is printable & 0: otherwise
 */
int is_printable(char c)
{
	if (c >= 32 && c < 127)
		return (1);

	return (0);
}

/**
 * append_hexa_code - a fun that append ascci in hexadecimal code to buffer
 * @buffer: an array of chars
 * @i: an index at which to start appending.
 * @ascii_code: ASSCI CODE
 * Return: 3
 */
int append_hexa_code(char ascii_code, char buffer[], int i)
{
	char map_to[] = "0123456789ABCDEF";
	if (ascii_code < 0)
		ascii_code *= -1;

	buffer[i++] = '\\';
	buffer[i++] = 'x';

	buffer[i++] = map_to[ascii_code / 16];
	buffer[i] = map_to[ascii_code % 16];

	return (3);
}


/**
 * is_digit - a fun that verifies if a char is a digit
 * @c: a char to be evaluated
 * Return: 1 if c is a digit
 */
int is_digit(char c)
{
	if (c >= '0' && c <= '9')
		return (1);

	return (0);
}

/**
 * convert_size_number - a fun that fasts a number to the specified size
 * @num: a number to be casted.
 * @size: a number indicating the type to be casted.
 * Return: a casted value of num
 */
long int convert_size_number(long int num, int size)
{
	if (size == S_LONG)
		return (num);
	else if (size == S_SHORT)
		return ((short)num);

	return ((int)num);
}


/**
 * convert_size_unsgnd - a fun that casts a number to the specified size
 * @num: a number to be casted
 * @size: a number indicating the type to be casted
 * Return: a casted value of num
 */
long int convert_size_unsgnd(unsigned long int num, int size)
{
	if (size == S_LONG)
		return (num);
	else if (size == S_SHORT)
		return ((unsigned short)num);

	return ((unsigned int)num);
}
