//Print all possible combinations of three different digits in ascending order, without repetitions and with specific formatting.

#include <unistd.h>  // This lets us use the write() function

// A simple function to print one character
void ft_putchar(char c)
{
    write(1, &c, 1);  // Write the character 'c' to the screen
}

// The main function that prints all combinations of three different digits
void ft_print_comb(void)
{
    int a = '0';  // First digit starts at '0'
    int b;        // Second digit
    int c;        // Third digit
    
    // First loop: a goes from '0' to '7'
    while (a <= '7')
    {
        b = a + 1;  // b always starts one above a
        // Second loop: b goes from a+1 to '8'
        while (b <= '8')
        {
            c = b + 1;  // c always starts one above b
            // Third loop: c goes from b+1 to '9'
            while (c <= '9')
            {
                // Print the current combination
                ft_putchar(a);
                ft_putchar(b);
                ft_putchar(c);
                
                // If this isn't the last combination (789),
                // print a comma and space
                if (!(a == '7' && b == '8' && c == '9'))
                {
                    ft_putchar(',');
                    ft_putchar(' ');
                }
                c++;  // Move to next digit for c
            }
            b++;  // Move to next digit for b
        }
        a++;  // Move to next digit for a
    }
}

int main(void)
{
    ft_print_comb();  // Call our function
    return(0);        // End the program
}

• Expected output:
$>./a.out | cat -e
012, 013, 014, 015, 016, 017, 018, 019, 023, ..., 789$>
*/
