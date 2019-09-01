#include <cs50.h>
#include <stdio.h>

int main(void)
{    //Prompt user for height of pyramid
    int n;
    do
    {
        n = get_int("How tall would you like the pyramid to be(1-8)?: ");
    }   
        //ensure height is between 1 and 8, if not, return prompt to user
        while (n < 1 || n > 8);
        
        //convert user height into usable information - n is height, i is iterations, s is spaces, h is hashmarks
        for (int i = 0; i < n; i++)
    {
        for (int s = 0; s < n - 1 - i; s++)
        {
            printf(" ");
        }    
        for (int h = 0; h < i + 1; h++)
        {
                printf("#");
        }
        //add function to print on new line after each iteration
        printf("\n");
    }
}
