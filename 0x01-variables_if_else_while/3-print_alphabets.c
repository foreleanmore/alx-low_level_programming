#include	<stdio.h>

/**
 * main	-	A programme printing the alphabet lower case and upper case
 *
 * Return:	Always	0	(success)
 */
int main(void)
{
	char	uc;

	for	(uc = 'a'; uc <= 'Z'; uc++)
		putchar(uc);
	for	(uc = 'A'; uc <= 'Z'; uc++)
		putchar(uc);

	putchar('\n');

	return	(0);
}

