#include "main.h"

/**
 * _memcpy - Entry point
 * @src: input
 * @dest: input
 * @n: input
 * Return: Always 0 (Sucess)
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
dest[i] = src[i];
return (dest);
}
