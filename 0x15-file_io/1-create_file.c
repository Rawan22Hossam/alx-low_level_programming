#include "holberton.h"

/**
 * create_file - creates a file.
 * @filename: pointer to the name of the file to create.
 * @text_content: pointer to string to write to the file.
 * Return: If the function fails -1 Else 1.
 */
int create_file(const char *filename, char *text_content)
{
int o, w, length = 0;

if (filename == NULL)
return (-1);
if (text_content != NULL)
{
for (length = 0; text_content[length];)
length++;
}
Op = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
Wr = write(o, text_content, length);

if (Op == -1 || Wr == -1)
return (-1);
close(Op);
return (1);
}
