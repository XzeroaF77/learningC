//To print a to z in program

#include <unistd.h>//header file for write()
//Function definition(also serves as declaration in C)
void	ft_print_alphabet(char c)//should take no arguments since it generates 'a' to 'z' internally
{
	char	c;//declare a character variable to store current letter
	c = 'a';//initialize c with 'a'
	while (c <= 'z')//loop from 'a' to 'z'
	{
		write(1, &c, 1);//Write the current character to standard output
		c++;//increment to the next character(post-increment)
	}
}
