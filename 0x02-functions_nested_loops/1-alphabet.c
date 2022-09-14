#include "main.h"

/**
 * print_alphabet - a functions that prints the alphabet, in lowercase,
 * followed by a new line.
 *
 * Description: print_alphabet will print a-z using putchar
 * Return: always equals to zero
 */

void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		_putchar(c);

	_putchar('\n');
}
