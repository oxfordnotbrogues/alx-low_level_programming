#include <stdio.h>
#include "main.h"
/**
 * main - prints all arguments it recieves
 * @argc: number of argments
 * @argv: array of arguments
 * Return: Always 0 (success)
 */
int main(int argc, char *argv[])
{
	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
