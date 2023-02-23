#include "main.h"

/**
 * _isupper - checks if the character is uppercase or not
 * @c : the letter to be checked
 * Return: 1 if the character is uppercase otherwise 0
 */
int _isupper(int c)
{
if (c >= 65 && c <= 90)
{
return (1);
}
else
{
return (0);
}
}
