#include <unistd.h>  // This header provides access to the write() function

/*
 * Prints a single character to the standard output
 * @param c: The character to be printed
 * 
 * How it works:
 * - write(1, ...) means "write to standard output" (screen)
 * - &c means "address of the character c" (where it's stored in memory)
 * - 1 means "write just 1 character"
 */
void ft_putchar(char c)
{
    write(1, &c, 1);
}

/*
 * Prints a whole number (integer) to the standard output
 * @param nb: The number to be printed (can be positive or negative)
 * 
 * How it works:
 * 1. First handles negative numbers by printing '-' and making nb positive
 * 2. For numbers with 2+ digits (≥10):
 *    - Uses recursion to print all digits before the last one (nb/10)
 *    - Then prints the last digit (nb%10)
 * 3. For single-digit numbers (<10):
 *    - Converts the number to a character and prints it
 */
void ft_putnbr(int nb)
{
    // Handle negative numbers
    if (nb < 0)
    {
        ft_putchar('-');  // Print minus sign
        nb = -nb;        // Make the number positive for easier handling
    }
    
    // Handle numbers with multiple digits
    if (nb >= 10)
    {
        // Recursive call to print all digits except the last one
        // Example: for 42, nb/10 is 4 (integer division)
        ft_putnbr(nb / 10);
        
        // Recursive call to print just the last digit
        // Example: for 42, nb%10 is 2 (remainder)
        ft_putnbr(nb % 10);
    }
    // Handle single-digit numbers
    else
    {
        // Convert number to character and print it
        // '0' is ASCII 48, so nb + '0' converts:
        // 0 → '0' (48), 1 → '1' (49), etc.
        ft_putchar(nb + '0');
    }
}
