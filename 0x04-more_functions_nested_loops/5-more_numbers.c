#include	"main.h"

/**
 * more_numbers	-	print x10 numbers from 0 to 14
 *
 * Return:	void
 */

void	more_numbers(void)
{
	int	i;
	int	j;

	for	(i =  1; i <= 10; i++)
	{
		for	(j = 0; j <= 14; j++)
		{
		_putchar(j);
		}
		_putchar('\n');
	}
}

