#include "main.h"

/**
 * _putchar - prints character
 * @c: character to be printed
 * Return: int
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * print_string - print string
 * @s: string to be printed
 * Return: Number of characters printed
 */
int print_string(char *s)
{
	int i, count = _strlen(s);

	for (i = 0; i < count; i++)
	{
		_putchar(s[i]);
	}
	return (count);
}

/**
 * _strlen - Finds length of string
 * @s: string
 * Return: Length of string
 */

int _strlen(char *s)
{
	int i = 0;

	while (*s++)
		i += 1;
	return (i);
}
