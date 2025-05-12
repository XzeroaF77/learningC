//To print from z to a in program

#include <unistd.h>//header file to write()
//Function definition (also serves as declaration in C)
void	ft_print_reverse_alphabet(char c)//Should take no argument since it generates 'z' to 'a' internally
{
	char	c;//declare a character variable to store current letter
	c = 'z';//initialize c with 'z'
	while (c >= 'a')//loop from 'z' to 'a'
		{
			write(1, &c, 1);//write the current character to standard output
			c--;//decrement to the previous character
		}
}
