//To check if number is negative or not

#include <unistd.h>//header file to write()
//Function to print 'N' if the number is negative and print 'P' for positive 
void	ft_is_negative(int n)
{
	char	negative;
	char	positive;

	negative = 'N';
	positive = 'P';
	if (n < 0)
		write(1, &negative, 1);
	else
		write(1, &positive, 1);
}
/*
int     main(void)
{
        ft_is_negative(-1);
        write(1, "\n", 1);
}
*/
