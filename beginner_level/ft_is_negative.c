//To check if number is negative or not

#include <unistd.h>//header file to write()
//Function to print 'N' if the number is negative and print 'P' for positive 
void    ft_is_negative(int n)//Takes an integer parameter
{
        char    negative;//character to print for negative numbers
        char    positive;//character to print for non-negative numbers

        negative = 'N';
        positive = 'P';
        if (n < 0)//check if number is negative
                write(1, &negative, 1);//Print 'N'
        else//Number is zero or positive
                write(1, &positive, 1);//Print 'P'
}
/*
int     main(void)
{
        ft_is_negative(-1);
        write(1, "\n", 1);
}
*/
