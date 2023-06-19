#include "main.h"

/**
 * _isdigit - checks if the character is uppercase or not
 * @c : the letter to be checked
 * Return: 1 if the character is uppercase otherwise 0
 */
int _isdigit(int c)
{
if (c >= 48 && c <= 57)
{
return (1);
}
else
{
return (0);
}
}
