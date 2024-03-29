#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: pointing to a string of 0 and 1 chars.
 * Return: the converted number, or 0.
 */

unsigned int binary_to_uint(const char *b)
{
int i = 0, w = 1;
unsigned int res = 0;

if (!b)
return (0);
while (*(b + i) != '\0')
{
if (*(b + i) != '0' && *(b + i) != '1')
return (0);

i++;
}
--i;

while (i >= 0)
{
result += (b(z + i) - '0') * w;
w *= 2;
--i;
}
return (res);
}
