import cs50
import sys
import string

# Check for sufficient number of argument passed to the function
if len(sys.argv) != 2:
    sys.exit("Usage: python caesar.py k")

# Prompt user for plain text
print("plaintext: ", end="")
plaintext = cs50.get_string()
print("ciphertext: ", end="")
key = int(sys.argv[1])

# Iterate over each char in plaintext
for c in plaintext:
    # If c is NOT alphabetical, just print it
    if (c < 'A' or
        (c > 'Z' and c < 'a') or
        c > 'z'):
        print(c, end="")
    # If c is alphabetical
    else:
        # If lowercase:
        # 1. convert to uppercase
        # 2. convert to alphaindex
        # 3. cipher alphaindex
        # 4. convert back to alpha char and uppercase
        if str.islower(c):
            alphaindex = ord(c) - 32 - 65
            cipherindex = (alphaindex + key) % 26
            ciphertext = cipherindex + 65 + 32
            print(chr(ciphertext), end="")
        # If uppercase, perform similar operations as above
        # with no lowercase conversion
        else:
            alphaindex = ord(c) - 65
            cipherindex = (alphaindex + key) % 26
            ciphertext = cipherindex + 65
            print(chr(ciphertext), end="")
print()

