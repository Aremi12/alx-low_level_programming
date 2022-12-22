#include "main.h"

/**
 * int _strlen - function that returns the length of a string
 * @s: Entry point
 * Return: 0
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; ++i);
	printf("lenght of the string: %d", i);
	return (0);
}
