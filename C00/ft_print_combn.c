//Designed to print all combinations of n digits in ascending order where n is a parameter passed to the function

#include <unistd.h>
/*write a single character to standard output (file descriptor 1)*/
void    ft_putchar(char c)
{
        write(1, &c, 1);//system call to write 1 byte at address of 'c' to stdout
}
/* Prints a single combination and proper separators */
void    ft_print_combination(int n, int *comb)
{
        int     i;

        i = 0;
        while (i < n) // Loop through each digit in the combination
        {
                ft_putchar(comb[i] + '0'); // Convert digit to ASCII character
                i++;
        }
        if (comb[0] != 10 - n)// Check if this isn't the last combination (9-n would be first digit of last comb)
        {
                ft_putchar(','); // Add separator
                ft_putchar(' ');
        }
}
/* Recursively generates all combinations */
void    ft_print_combn_recursive(int n, int start, int depth, int *comb)
{
        int     i;

        if (depth == n)// Base case: when we have filled all positions
        {
                ft_print_combination(n, comb); // Print the complete combination
                return ;
        }
        i = start;// Recursive case: try all possible digits from 'start' to 9
        while (i <= 9)
        {
                comb[depth] = i; // Store current digit
                ft_print_combn_recursive(n, i + 1, depth + 1, comb); // Recurse with next digit > current (i+1) and increased depth
                i++;
        }
}
/* Main function that validates input and starts the process */
void    ft_print_combn(int n)
{
        int     comb[9]; //Array to store combinations (max size 9)

        if (n < 1 || n > 9) // Input validation - only allow n between 1 and 9
                return ;
        //Start recursive generation with:
        // - n digits requested
        // - starting digit 0
        // - current depth 0
        // - empty combination array
        ft_print_combn_recursive(n, 0, 0, comb);
}

int     main(void)
{
        ft_print_combn(2);
        return (0);
}
