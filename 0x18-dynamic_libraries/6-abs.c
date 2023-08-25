#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _abs - computes the absolute value ofan integer
 * @n: The integer to be computed
 * Return: The absolute value of the integer
 */
int _abs(int n)
{
	if (n >= 0)
		return (n);
	else
		return (-n);
}
