#include <stdio.h>
#include "main.h"
/**
 * _strlen - This function calculates the length of a string
 * @str: The string whose length to find
 * Return: Returns the length of the string
 */
int _strlen(char* str)
{
	int len = 0;

	while (str[len] != '\0')
		len++;
	return (len);
}
