#include <stdio.h>
#include "main.h"
/**
 * _strcpy - see description
 * @dest: char type string
 * @src: char type string
 * Description: copy the string pointed by the pointer 'src' to
 * thee buffer pointed by 'dest'
 * Return:pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
