#include <unistd.h>

/**
 * _putchar - a fun thta write character c to the stdout
 * @c: a character
 * Return: 1 on success
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
