#include <stdio.h>
#include "main.h"

/**
 * main - Prints all args content
 * @argc: argument count
 * @argv: argument count
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
int i;

for (i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);
}
return (0);
}
