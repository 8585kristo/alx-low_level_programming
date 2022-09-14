#include "main.h"

/**
 * print_alphabet_x10 - a function that prints 10 times the alphabet,
 * in lowercases, followed by a new line.
 *
 * Descriotion: a function that prints 10 times the alphabet,
 * in lower cases followed by a new line.
 * Return: it is void
 */

void print_alphabet_x10(void)
{
	char c;
	int i;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
}
