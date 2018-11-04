# Caesar
Encrypt messages using Caesar's cipher and user's input key.<br/>

# Background:
This is problem sets 2 and 6 in CS50. C program was created for pset2 while Python program was created for pset6.<br/>
Supposedly, Caesar (yes, that Caesar) used to "encrypt" (i.e., conceal in a reversible way) confidential messages by shifting each letter therein by some number of places. For instance, he might write A as B, B as C, C as D, …​, and, wrapping around alphabetically, Z as A. And so, to say HELLO to someone, Caesar might write IFMMP. Upon receiving such messages from Caesar, recipients would have to "decrypt" them by shifting letters in the opposite direction by the same number of places.<br/>
The secrecy of this "cryptosystem" relied on only Caesar and the recipients knowing a secret, the number of places by which Caesar had shifted his letters (e.g., 1). Not particularly secure by modern standards, but, hey, if you’re perhaps the first in the world to do it, pretty secure!<br/>
Unencrypted text is generally called plaintext. Encrypted text is generally called ciphertext. And the secret used is called a key.<br/>
More generally, Caesar’s algorithm (i.e., cipher) encrypts messages by "rotating" each letter by k positions. More formally, if p is some plaintext (i.e., an unencrypted message), pi is the ith character in p, and k is a secret key (i.e., a non-negative integer), then each letter, ci, in the ciphertext, c, is computed as<br>
<p align="center">
  c<sub>i</sub> = p<sub>i</sub> + k mod 26<br/>
</p>
wherein mod 26 here means "remainder when dividing by 26." This formula perhaps makes the cipher seem more complicated than it is, but it’s really just a concise way of expressing the algorithm precisely.<br/>

# Usage:
1. C program: ./caesar <key><br/>
2. Python program: python caesar.py <key><br/>
NOTE: <key> must be a non-negative integer. Program does NOT validate non-interger input!
