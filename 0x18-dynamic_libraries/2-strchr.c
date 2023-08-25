#include <stdio.h>
#include "main.h"
/**
 * _strchr - locates a character in a given string
 * @s: the given string
 * @c: the given string
 * Return: success, a pointer to the first occurence of c
 * Fail, return a Null pointer
 */
char *_strchr(char *s, char c)
{
	char *ptr;

	if (s == NULL)
		return (NULL);
	for (ptr = s; *ptr; ptr++)
		if (*ptr == c)
			return (ptr);
}
