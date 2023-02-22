#include "main.h"

/**
* _islower - method to print lower case
*
*@c: 1 if lower case
*and 0 otherwise
*/

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
