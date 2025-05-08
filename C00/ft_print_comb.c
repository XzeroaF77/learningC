//Print all possible combinations of three different digiys in ascending order, without repetitions and with specific formatting.

#include <unistd.h>

void	ft_print_int(int n)//Prints a single digit(0-9)
{
	char	*alphabet;

	alphabet = "0123456789";//string where each character represents a digit
	write (1, alphabet + n, 1);//print the digit at position n in the string.
}

void	ft_print_nums(int a, int b, int c)//Prints three digit in order(a,b,c). It calls three times to print a, b and c.
{
	ft_print_int(a);
	ft_print_int(b);
	ft_print_int(c);
}

void	ft_print_comb(void)//To print all possible unique combinations of three different digits in ascending order from 012 to 789, separated by commas and spaces.
{
	int	a;
	int	b;
	int	c;

	a = 0;//first digit starts at 0
	while (a <= 7)//ensures a goes from 0 to 7, since b and c must be larger
	{
		b = a + 1;//second digit must be greater than a
		while (b <= 8)//ensures b goes up to 8, since c must be larger
		{
			c = b + 1;//third digit must be greater than b
			while (c <= 9)//ensures c goes up to 9
			{
				ft_print_nums(a, b, c);//prints the three digits e.g, 012
				if (a != 7 || b != 8 || c != 9)//if it is not the last combination 789, print ","
				{
					write(1, ", ", 2);
				}
				c += 1;//move to the next digit for the third position
			}
			b += 1;//when c reaches 9, move b up
		}
		a += 1;//when b reaches 8, move a up
	}
}
/*
int	main(void)
{
	ft_print_comb();
	return (0);
}
*/
