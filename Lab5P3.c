/* Lab 5 P3: starter code to complete*/
#include <stdio.h>
#include <string.h>

int main()
{
    char alp = 'A'; //first letter of the alphabet
    char input[256];
    int letterCount[26] = {0}; // Array to store the count of each letter initialized to zeros

    printf("Enter text strings (press Enter on an empty line to exit):\n");

    while (1)
    {
        fgets(input, sizeof(input), stdin); // get the input from the user via keyboard
        int length = strlen(input);
        // Check for an empty line to exit the loop
        if (length == 1 && input[0] == '\n')
        {
            break;
        }else{
        // Your Code should be implemented here
        // Iterate through the characters in the input
        for (int i=0; i<length; i++){
            // Check if the character is a letter (A-Z or a-z)
            if(input[i]>='A' && input[i]<='Z'){
                // Increment the corresponding count in the array
                switch (input[i])
                {
                case 'A':
                    letterCount[0] += 1;
                    break;
                case 'B':
                    letterCount[1] += 1;
                    break;
                case 'C':
                    letterCount[2] += 1;
                    break;
                case 'D':
                    letterCount[3] += 1;
                    break;
                case 'E':
                    letterCount[4] += 1;
                    break;
                case 'F':
                    letterCount[5] += 1;
                    break;
                case 'G':
                    letterCount[6] += 1;
                    break;
                case 'H':
                    letterCount[7] += 1;
                    break;
                case 'I':
                    letterCount[8] += 1;
                    break;
                case 'J':
                    letterCount[9] += 1;
                    break;
                case 'K':
                    letterCount[10] += 1;
                    break;
                case 'L':
                    letterCount[11] += 1;
                    break;
                case 'M':
                    letterCount[12] += 1;
                    break;
                case 'N':
                    letterCount[13] += 1;
                    break;
                case 'O':
                    letterCount[14] += 1;
                    break;
                case 'P':
                    letterCount[15] += 1;
                    break;
                case 'Q':
                    letterCount[16] += 1;
                    break;
                case 'R':
                    letterCount[17] += 1;
                    break;
                case 'S':
                    letterCount[18] += 1;
                    break;
                case 'T':
                    letterCount[19] += 1;
                    break;
                case 'U':
                    letterCount[20] += 1;
                    break;
                case 'V':
                    letterCount[21] += 1;
                    break;
                case 'W':
                    letterCount[22] += 1;
                    break;
                case 'X':
                    letterCount[23] += 1;
                    break;
                case 'Y':
                    letterCount[24] += 1;
                    break;
                case 'Z':
                    letterCount[25] += 1;
                    break;
                default:
                    break;
                }
            }else{
                // Increment the corresponding count in the array
                switch (input[i])
                {
                case 'a':
                    letterCount[0] += 1;
                    break;
                case 'b':
                    letterCount[1] += 1;
                    break;
                case 'c':
                    letterCount[2] += 1;
                    break;
                case 'd':
                    letterCount[3] += 1;
                    break;
                case 'e':
                    letterCount[4] += 1;
                    break;
                case 'f':
                    letterCount[5] += 1;
                    break;
                case 'g':
                    letterCount[6] += 1;
                    break;
                case 'h':
                    letterCount[7] += 1;
                    break;
                case 'i':
                    letterCount[8] += 1;
                    break;
                case 'j':
                    letterCount[9] += 1;
                    break;
                case 'k':
                    letterCount[10] += 1;
                    break;
                case 'l':
                    letterCount[11] += 1;
                    break;
                case 'm':
                    letterCount[12] += 1;
                    break;
                case 'n':
                    letterCount[13] += 1;
                    break;
                case 'o':
                    letterCount[14] += 1;
                    break;
                case 'p':
                    letterCount[15] += 1;
                    break;
                case 'q':
                    letterCount[16] += 1;
                    break;
                case 'r':
                    letterCount[17] += 1;
                    break;
                case 's':
                    letterCount[18] += 1;
                    break;
                case 't':
                    letterCount[19] += 1;
                    break;
                case 'u':
                    letterCount[20] += 1;
                    break;
                case 'v':
                    letterCount[21] += 1;
                    break;
                case 'w':
                    letterCount[22] += 1;
                    break;
                case 'x':
                    letterCount[23] += 1;
                    break;
                case 'y':
                    letterCount[24] += 1;
                    break;
                case 'z':
                    letterCount[25] += 1;
                    break;
                default:
                    break;
            }
        }
    }
}
}
// More of your code here to
    // Display the letter counts
    printf("\nDistribution of letters in the input:\n");
    for(int i = 0; i<26; i++){
        printf("%c: %d ", alp, letterCount[i]);
        alp++;
    }

    return 0;
}