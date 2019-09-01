#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
    //Prompt user for change
    float x;
    int change;
    
    do
    {
        x = get_float("change: ");
    }
    //Ensure value for change is a positive number
    while (x < 0);
    
    //Turn decimal into integer
    change = x * 100;
    
    int coins = 0;
    
    //Ensure program uses largest coin first starting with .25 or 25
    while (change >= 25)
    {
        coins ++;
        change = change -25;
    }
    
    while (change >= 10)
    {
        coins++;
        change = change -10;
    }
    
    while (change >= 5)
    {
        coins++;
        change = change -5;
    }
    
    while (change >= 1)
    {
        coins++;
        change = change - 1;
    }
    
    //output of change
    printf("%i\n", coins);
}
