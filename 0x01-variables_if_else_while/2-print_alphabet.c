#include	<stdio.h>

/**
 * main	-	Prints alphabet in lower case
 *
 * Return:	Always	0	(success)
 */

int main(void)
{
	char	lc;

	for	(lc = 'a'; lc <= 'z'; lc++)
	{
		putchar("%c", lc);
	}
	putchar('\n');
	return	(0);
}

