#include "main.h"
#include <stdio.h>
/**
 * _strspn - Entry point
 * @s: input
 * @accept: input
 * Return: Always 0 (Sucess)
 */

unsigned int _srtspn(char *s, char *accept)
{
unsigned int i, n, value, check;

value = 0;

for (i = 0; s[i] != '\0'; i++)
{
check = 0;
for (n = 0; accept[n] != '\0'; n++)
{
if (accept[n] == s[i])
{
valu++;
check = 1;
}
}
}
}
