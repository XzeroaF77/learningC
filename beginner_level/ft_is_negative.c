//To check if number is negative or not

#include <unistd.h>//header file to write()
//Function to print 'N' if the number is negative and print 'P' for positive 
void    ft_is_negative(int n)//Takes an integer parameter
{
        write(1, (n < 0) ? "N" : "P", 1) //ternary operator to simplify
}
/*
int     main(void)
{
        ft_is_negative(-1);
        write(1, "\n", 1);
}
*/
