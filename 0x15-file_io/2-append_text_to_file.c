#include "main.h"
/**
* append_text: This function is to append content at the end of a file
* @filename: File name is a pointer to file created
* @text_content: Content of the file that will be created
* Return: returns NULL if function fails or file name is null
*              Otherwise returns 1.
*/
int append_text_to_file(const char *filename, char *text_content)
{
int w, o, leng = 0;

if (filename == NULL)
return (-1);
if (text_content != NULL)
{
for (leng = 0; text_content[leng];)
leng++;
}

o = open(filename, O_WRONLY | O_APPEND);
w = write(o, text_content, leng);

if (o == -1 || w == -1)
return (-1);
close(o);
return (1);
}
