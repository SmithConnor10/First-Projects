#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(int argc, string argv[2])
{
    // if user does not input 2 command line arguments, print error
    if (argc != 2)
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }
    else
    {
        printf("Success\n");
    }
        //Iterate over each character in argument
    for (int i = 0, n = strlen(argv[1]); i < n; i++)
    {
        if (!isdigit(argv[1][i]))
        {
             printf("Usage: ./caesar key\n");
            return 1;
        }
    }
    //Once characters pass argument check, store key into int k
    int k = atoi(argv[1]);
    //Check if integer is non negative
    if (k < 0)
    {
        printf("Usage: ./caesar key");
        return 1;
    }
    
    //Prompt user for a string - convert to plaintext
    string plaintext = get_string("plaintext: ");
    printf("ciphertext: ");
    //Loop over plaintext and output cipher text
    for (int i = 0, len = strlen(plaintext); i < len; i++)
 
    {  
        if (islower(plaintext[i]))
            printf("%c", (plaintext[i] -'a' + k) % 26 + 'a');
            
        else if (isupper(plaintext[i]))
            printf("%c", (plaintext[i] -'A' + k) % 26 + 'A');
            
        else
            printf("%c", plaintext[i]);
    }  
    printf("\n");
}
