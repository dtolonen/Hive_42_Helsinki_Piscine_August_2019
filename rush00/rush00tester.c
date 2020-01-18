#include <unistd.h>

int	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	end(int x, char first, char second, char third)
{
	int	width;

	width = x;
	ft_putchar(first);
	/* loop until correct width */
	while (width > 2)
	{
		ft_putchar(second);
		width--;
	}
	/* insert last character + new line */
	if (x > 1)
		ft_putchar(third);
	ft_putchar('\n');
}

void	mid(int x, int y, char fourth)
{
	int width;
	int height;

	height = y - 1;
	/* loop until correct height */
	while (height > 1)
	{
		ft_putchar(fourth);
		width = x;
		/* loop until correct width */
		while (width > 2)
		{
			ft_putchar(' ');
			width--;
		}
		/* insert last character + new line */
		ft_putchar(fourth);
		ft_putchar('\n');	
		height--;
	}
}

void	rush(int x, int y)
{
	if (x > 0 && y > 0)
	{
		end(x, 'A', 'B', 'C');
		if (y > 2)
			mid(x, y, 'B');
		if (y > 1)
			end(x, 'C', 'B', 'A');
	}
}

int		main(void)
{
	/* input image size */	
	rush(5, 3);
	return (0);
}