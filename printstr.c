#include <unistd.h>

/**
 * printstr - a function to print any string passed
 *
 * @a: the string char
 *
 * Return: the number of string printed
 */


int printstr(char *a)
{
	int i = 0, count = 0;

	while (*a != '\0')
	{
		count++;
		a++;
		i++;
	}
	a -= count;   /* return a to point back to its first character */

	return (write(1, a, count));
}
