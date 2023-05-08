#include "holberton.h"

/**
 * main - copies the content of a file to another file
 * @argc: number of arguments passed to the program
 * @argv: array of arguments
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
int fr, fw, d, m, n;
char buf[BUFSIZ];

if (argc != 3)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
exit(97);
}
fr = open(argv[1], O_RDONLY);
if (fr < 0)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
exit(98);
}
fd_w = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
while ((d = read(fr, buf, BUFSIZ)) > 0)
{
if (fw < 0 || write(fw, buf, d) != d)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
close(fr);
exit(99);
}
}
if (d < 0)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
exit(98);
}
m = close(fr);
n = close(fw);
if (m < 0 || n < 0)
{
if (m < 0)
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fr);
if (n < 0)
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fw);
exit(100);
}
return (0);
}
