#include	<stdio.h>

/**
 * main	-	 prints all numbers of base 10 starting from 0 using char
 *
 * Return:	Always	0	(success)
 */

int	main(void)
{
	char num;

	for	(num = '0'; num <= '9'; num++)
		putchar(num);
		putchar("\n");

		return	(0);
}

