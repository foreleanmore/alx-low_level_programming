#include	<stdio.h>

/**
 * main	-	A program that prints the size of various computer data types
 *
 * Return:	Always	0	(success)
 */

int	main(void)
{
	printf("Size of a char: %zu byte(S)\n", sizeof(char));
	printf("Size of an int: %zu byte(S)\n", sizeof(int));
	printf("Size of a long int: %zu byte(S)\n", sizeof(long int));
	printf("Size of a long long int: %zu byte(S)\n", sizeof(long long int));
	printf("Size of a float: %zu byte(S)\n", sizeof(float));
	return	(0);
}

