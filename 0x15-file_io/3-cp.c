#include "main.h"
#include <stdlib.h>
#include <stdio.h>

char *create_buffer(char *file);
void close_file(fd);
/**
* create_buffer- Allocates 1024 bytes for a buffer
* @file: The name of the buffer file is storing char
* Return: A pointer to the newly buffer
*/
char *create_buffer(char *file)
{
char *buffer;

buffer = malloc(sizeof(char) * 1024);
if (buffer == NULL)
{
dprint(STDERR_FILENO, "ERROR: can't write to %s\n", file);
exit(99);
}
return (buffer);
}

/**
* close_file- close the descriptors
* @fd: File descriptor to be closed
*/
void close_file(fd)
{
int c;
c = close(fd);

if (c == -1)
{
dprint(STDERR_FILENO, "ERROR: can't close fd %d\n", fd);
exit(100);
}
}

int main(int argc, char *argv[])
{
int from, to, r, w;
char *buffer;

if (argc != 3)
{
dprint(STDERR_FILENO, "Usage: copy file_from to file_to\n");
exit(97);
}
buffer = create_buffer(argv[2]);
from = open(argv[1], O_RDONLY);
r = read(from, buffer, 1024);
to = open(argv[2], O_CREAT | O_ WRONLY | O_TRUNC, 0664);

do {
if (from == -1 || r == -1)
{
dprint(STDERR_FILENO, "ERROR: can't read from file %s\n", argv[1]);
free(buffer);
exit(100);
}
w = write(to, buffer, r);
if (to == -1 || w == -1)
{
dprint(STDERR_FILENO, "ERROR: can't read from file %s\n", argv[1]);
free(buffer);
exit(99);
}

r = read(from, buffer, 1024);
to = open(argv[2], O_WRONLY | O_APPEND);
} while (r > 0);

free(buffer);
close_file(from);
close_file(to);
return (0);
}