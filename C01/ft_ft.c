/*
 * Function: ft_ft
 * ----------------------------
 * Sets the value of an integer to 42 using a pointer.
 * 
 * Parameters:
 *   nbr - A pointer to an integer whose value will be changed to 42.
 * 
 * How it works:
 *   - The function takes a pointer (*nbr) as input.
 *   - By dereferencing the pointer (*nbr = 42), we modify the value stored at the memory address it points to.
 *   - After calling this function, the original variable passed to it will hold the value 42.
 * 
 * Example:
 *   int num = 10;
 *   ft_ft(&num);  // Now, num = 42
 */

#include <stdio.h>

void    ft_ft(int *nbr)
{
        *nbr = 42;  // Dereferences the pointer and assigns 42 to the pointed variable
}
