#include "shell.h"

/**
 *print_alphabet - Program prints the alphabet in lower case
 *
 * Return: Always 0 (Success)
 */

void print_alphabet(void)
{
	char first;

	first = 'a';
	while (first <= 'z')
	{
		putchar(first);
		first++;
	}
	putchar('\n');
}
