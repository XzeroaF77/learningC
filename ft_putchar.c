#include <unistd.h>//include header file

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(void)// output 
{
  ft_putchar('c');
}
