#include "main.h"
#include <unistd.h>

/**
 * putchar - writes the code c to stdout
 * @c: The character to print
 * Return: on success 1
 */

int _putchar(char c)
{
    return (write(1, &c, 1));

}
