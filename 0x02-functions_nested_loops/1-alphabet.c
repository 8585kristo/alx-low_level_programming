#include "main.h"

/**
 * print_alphabet - afunctions that prints the alphabet, in lowercase,
 * folowed by a new line.
 *
 * Desscription: print_alphabet will print a-z using putchar
 * Return: always equals to zero
 */

void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		_putchar(c);

	_putchar('\n');
}
