#include "main.h"
#include <unistd.h>

/**
 * _putchar - programs write program to standard output
 * 0c: the character to print
 * Return: on success
 */

int _putchar(char c)
{
    return (write(1, &c, 1));

}
