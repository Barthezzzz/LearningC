// 9. Count Vowels in a String

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() 
{

    char str[100];

    int count = 0;

 

    // Prompt the user to enter a string
    printf("Hey dude, Enter a string: ");


    
    // Read the string input
    scanf("%99s", str);

    int len = strlen(str);

    // Count the vowels in the string (a, e, i, o, u)    
    for (int i = 0; i < len; i++)
    {
        // Convert character to lowercase safely 
        // (cast to unsigned char prevents undefined 
        // behavior with negative values)
        char ch = tolower((unsigned char)str[i]);
        char ch = tolower((unsigned char)str[i]);
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' )
        {
            count++;
        }
    }


    // Print the vowel count
    printf("The number of vowels in the word %s is: %d", str, count);
 

    return 0;

}