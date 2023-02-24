#include	"main.h"

/**
 * print_diagonal	-	print diagonal line
 * @n:	line
 *
 * Return:	0
 */

void	print_diagonal(int n)
{
	int	x;
	int	i;

	if	(n <= 0)
		_putchar('\n');
	else
	{
		for	(x = 0; x < n; x++)
		{
			for	(i = 0; i <= 0; i++)
				_putchar(' ');
			_putchar(92);
			_putchar('\n');
		}
		_putchar('\n');
	}
}

