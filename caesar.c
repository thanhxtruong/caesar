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
    // Check for sufficient number of argument passed to the function
    if(argc != 2)
    {
        printf("Usage: ./caesar k\n");
        return 1;
    }

    else
    {
        // Prompt user for plain text
        plaintext = get_string("plaintext: ");
        printf("ciphertext: ");
        key = atoi(argv[1]);
        for (int j = 0, n = strlen(plaintext); j < n; j++ )
        {
            // Check to see if char is alphabetical
            if(plaintext[j] < 'A' ||
                (plaintext[j] > 'Z' && plaintext[j] < 'a') ||
                plaintext[j] > 'z')
            {
                printf("%c", plaintext[j]);
            }
            else
            {
                // If lowercase:
                // 1. convert to uppercase
                // 2. convert to alphaindex
                // 3. cipher alphaindex
                // 4. convert back to alpha char and uppercase
                if(islower(plaintext[j]))
                {
                    plaintext[j] = plaintext[j] - 32;
                    alphaindex = plaintext[j] - 65;
                    cipherindex = (alphaindex + key) % 26;
                    ciphertext = cipherindex + 65 + 32;
                    printf("%c", ciphertext);
                }

                // Else if uppercase, perform similar operations as above
                // with no lowercase conversion
                else
                {
                    alphaindex = plaintext[j] - 65;
                    cipherindex = (alphaindex + key) % 26;
                    ciphertext = cipherindex + 65;
                    printf("%c", ciphertext);
                }
            }
        }
        printf("\n");
    }
}
