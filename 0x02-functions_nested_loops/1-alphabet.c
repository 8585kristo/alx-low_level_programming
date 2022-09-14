#include "main.h"

/**
 * print_alphabet - prints Alphabets
 * Description: prints the alphabet, in lowercase, followed by a new line.
 *
 * Return: Always success
 */
void print_alphabet(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar(ch);
	}
	_putchar('n\');
}
