#include "main.h"
#include <unistd.h>

/**
 * putchar - writes the character c to stdout
 * @c; the charater to print
 *
 * Return: On success 1
 */
int _putcha(char c)
{
        return (write(1, &c, 1));
}
