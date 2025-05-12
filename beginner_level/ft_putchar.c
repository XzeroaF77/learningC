//To print one character 'a' in program

#include <unistd.h>//header file for write ()	
//Function declaration and definition
void	ft_putchar(char c)//function definition(also serves as declaration in C)
{
	write(1, &c, 1);//write the character 'c' to standard output
}
/*
//Main function
int	main(void)
{
	ft_putchar('c');//call the function with character 'c'
	return 0;//return 0 to indicate successful execution
}
*/

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
