//To print the digit from 0 to 9

#include <unistd.h>//Header file for write()
//Function to print a single character
void	ft_putchar(char c)//Take a character as argument
{
	write(1, &c, 1);//write the character to standard output
}

//Function to print digits 0-9
//Clear intent: The code obviously deals with characters.
//Memory-efficient: Uses 1 byte per digit instead of 4.
//Portable: Works reliably across all systems.
void	ft_print_number(void)//Take no arguments
{
	char	digit;//should be char since working with ASCII character
	digit = '0';//Start with ASCII '0'
	while (digit <= '9')//loop through ASCII '0' to '9'
		{
			ft_putchar(digit);//print the current digit
			digit++;//Move to next ASCII digit (post-increment)
		}
}



//why not void ft_print_number (int x)
//int x = '0';  // x = 48 (ASCII '0')
//while (x <= '9') {  // '9' = ASCII 57
  //  ft_putchar(x);  // Prints x as a character
  //  x++;

//It is wrong because
//Unnecessary use of int for a character-based task.
//Wastes memory (int is typically 4 bytes vs char's 1 byte).
//Misleads future readers (the code suggests it works with numbers, not chars).

//It is correct because ft_putchar takes an int 
//(due to C's default argument promotions), 
//so passing x (an int holding ASCII values) still printed the right characters.

