#include  "main.h"

/**
 * print_alphabet - prints a to z in lowercase
 * returns always 0;
 */

void print_alphabet(void)
{
	char i;
	
	for(i='a'; i <= 'z' ; i++)
		_putchar(i);
	_putchar('\n');
}
