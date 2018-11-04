#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

int key;
char alphaindex;
char cipherindex;
char ciphertext;

string plaintext;

int main (int argc, string argv[])
{
    //Check for sufficient number of argument passed to the function
    if(argc < 2)
    {
        printf("Insuffient arguments passed to execute function. Enter a 'key' and 'text' to cipher\n");
    }
    else
    {
        key = atoi(argv[1]);
        for(int i = 2; i < argc; i++)
        {
            plaintext = argv[i];
            //Loop to extract each char from string
            for (int j = 0, n = strlen(plaintext); j < n; j++ )
            {
                if(plaintext[j] < 'A' || (plaintext[j] > 'Z' && plaintext[j] < 'a') || plaintext[j] > 'z')   //check to see if char is alphabetical
                {
                    printf("%c", plaintext[j]);
                }
                else
                {
                    if(islower(plaintext[j]))                        //check to see if lowercase and covert accordingly
                    {
                        plaintext[j] = plaintext[j] - 32;
                        alphaindex = plaintext[j] - 65;                //convert to alpha index
                        cipherindex = (alphaindex + key) % 26;      //cipher alphaindex
                        ciphertext = cipherindex + 65 + 32;              //convert to ciphertext and uppercase
                        printf("%c", ciphertext);
                    }
                    else
                    {
                        alphaindex = plaintext[j] - 65;                //convert to alpha index
                        cipherindex = (alphaindex + key) % 26;      //cipher alphaindex
                        ciphertext = cipherindex + 65;              //convert to ciphertext and uppercase
                        printf("%c", ciphertext);
                    }
                }
            }
            printf("\n");
        }
    }
}
