#include <stdio.h>
#include "main.h"
/**
 * _strstr - locates a substring
 * @haystack: string to look through
 * @needle: substring to find
 * Return: pointer to string with result of search
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int len;

	len = 0;

	while (needle[len] != '\0')
		len++;
	while (*haystack != '\0')
	{
		if (_strcmp(haystack, needle, len) == 0)
			return (haystack);
		haystack++;
	}
	return (NULL);
}
