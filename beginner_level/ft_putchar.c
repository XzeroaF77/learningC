//To print one character 'a' in program

#include <unistd.h> //print one character

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(void)
{
	ft_putchar('c');
}

/*
#include <stdio.h>//use ASCII values to display certain characters.

int	main(void)
{
	char a = 65, b = 66, c = 67;
	printf("%c", a);
	printf("%c", b);
	printf("%c, c);
}
*/
