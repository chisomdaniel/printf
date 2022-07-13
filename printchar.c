#include <unistd.h>

/**
 * printchar - print a char to stdout
 *
 * @a: the char to be passed
 *
 * Return: the length of the char printed
 *     in this case 1, or -1 if error is noticed
 */

int printchar(char a)
{
	return (write(1, &a, 1));
}
