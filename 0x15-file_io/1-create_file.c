#include "main.h"
/**
* create_file - Creates a file and write to the file
* @filename: A pointer to the name of the file is created
*@text_content: A pointer to a string to write a file
Return: if funtion fails return -1, Otherwise retrun (1)
*/
int create_file(const char *filename, char *text_content)
{
int fd, w, leng = 0;

if (filename == NULL)
return (-1);
if (text_content != NULL)
{
for (leng = 0; text_content[leng];)
leng++;
}

fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
w = write(fd, text_content, leng);

if (fd == -1 || w == -1)
return (-1);
close(fd)
return (1);
}
