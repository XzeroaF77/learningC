//Designed to print all possible output combinations of two different two digit numbers, ranging from 00 to 99 in ascending orfer
// Each combination should be seperated by comma and the output should not end with a comma

#include <unistd.h>  // Include the header for write() function

// Function to print a single character
void ft_putchar(char c)
{
    write(1, &c, 1);  // Write the character 'c' to standard output (file descriptor 1)
}

// Function to print all two-number combinations from 00 01 to 98 99
void ft_print_comb2(void)
{
    int a;  // First number in the pair (will range from 00 to 98)
    int b;  // Second number in the pair (will range from a+1 to 99)

    a = 0;  // Start with first number at 00
    while(a <= 98)  // Loop until first number reaches 98
    {
        b = a + 1;  // Second number always starts at first number + 1
        while(b <= 99)  // Loop until second number reaches 99
        {
            // Print first number (two digits)
            ft_putchar((a / 10) + '0');  // Print tens digit of 'a'
            ft_putchar((a % 10) + '0');  // Print units digit of 'a'
            ft_putchar(' ');              // Print space between numbers
            
            // Print second number (two digits)
            ft_putchar((b / 10) + '0');  // Print tens digit of 'b'
            ft_putchar((b % 10) + '0');  // Print units digit of 'b'

            // If this isn't the last combination (98 99), print comma and space
            if(!(a == 98 && b == 99))
            {
                ft_putchar(',');  // Print comma
                ft_putchar(' ');   // Print space
            }
            b++;  // Move to next second number
        }
        a++;  // Move to next first number
    }
}

// Main function - program entry point
int main(void)
{
    ft_print_comb2();  // Call our combination printing function
    return(0);         // Return 0 to indicate successful execution
}
