#include <stdio.h>
#include "main.h"
/**
 * _puts -  This function outputs a string
 * @str: The string to output
 * Return: Returns 0 on success
 */
int _puts(const char *str)
{
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
