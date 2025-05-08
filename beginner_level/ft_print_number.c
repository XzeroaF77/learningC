//To print the digit from 0 to 9

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_number(int x)
{
	int	x;
	x = '0';
	while (x <= '9')
		{
			ft_putchar(x);
			x++;
		}
}
