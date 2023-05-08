#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Reads text file and prints it to Posix stdout.
 * @filename: A pointer to the name of the file.
 * @letters: The number of letters the function should read and print.
 * Return: If the function fails or filename is NULL 0.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
int d;
ssize_t len, lenw;
char *buffer;

if (filename == NULL)
return (0);
d = open(filename, O_RDONLY);
if (d == -1)
return (0);
buffer = malloc(sizeof(char) * letters);
if (buffer == NULL)
{
close(d);
return (0);
}
len = read(d, buffer, letters);
close(d);
if (lenr == -1)
{
free(buffer);
return (0);
}
lenw = write(STDOUT_FILENO, buffer, len);
free(buffer);
if (len != lenw)
return (0);
return (lenw);
}
