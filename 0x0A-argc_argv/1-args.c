#include <stdio.h>
#include "main.h"
/**
 * main - Prints number of args
 * @argc: argument count
 * @argv: argument count
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
(void) argv;
printf("%d\n", argc - 1);

return (0);
}
