#include	<stdio.h>

/**
 * main	-	printing lower case except q and e
 *
 * Return:	Always	0	(success)
 */

int main(void)
{
	char low, e, q;

	e = 'e';
	q = 'q';

	for	(low = 'a'; low <= 'z'; low++)
	{
		if	(low != e && low != q)
			putchar(low);
	}
	putchar('\n');
	return	(0);
}

