#include	"main.h"

/**
 * _islower	-	1 if the input is a lowercase char. .Another cases  shows 0
 *
 * @c:	The character in ASCIIA code
 *
 * Return:	1 for lowercase character.	0 for the rest
 */
int _islower(int c)
{
	if	(c >= 97 && c <= 122)
	{
		return	(1);
	}
	else
	{
		return	(0);
	}
	_putchar('\n');
}

