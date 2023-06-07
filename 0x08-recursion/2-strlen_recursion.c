#include "main.h"
/**
 * _strlen_recursion - Returns the length of a string
 * @s: The string to be measured
 * Return: the length of the string
 */
int _strlen_recursion(char *s)
{
	int lead = 0;

	if (*s)
	{
		lead++;
		lead += _strlen_recursion(s + 1);
	}
	return (lead);
}
