#include "holberton.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: file to append the text to
 * @text_content: content to append into the file
 * Return: 1 if true and -1 if fails
 */
int append_text_to_file(const char *filename, char *text_content)
{
int f_d, x, y = 0;

if (!filename)
return (-1);
fd = open(filename, O_WRONLY | O_APPEND);
if (f_d < 0)
return (-1);
if (text_content)
{
while (text_content[y])
y++;
x = write(f_d, text_content, y);
if (x != y)
return (-1);
}
close(f_d);
return (1);
}
