// 5. Reverse a String
#include <stdio.h>
#include <string.h>
 

int main() {

    char str[100];

 

    // Prompt the user to enter a string
    printf("Please enter a string:");

    // Read the string input
    scanf("%99s", str);

    int length = strlen(str);

    printf("The word is %s\n", str);
    printf("---------------\n");
    printf("The reversed word is: ");

    // Reverse the string
    // Print the reversed string

    for (int i = length; i >= 0; i--)
    {
        // printf("The length of the word is %d", length);
        printf("%c", str[i]);
    }

    return 0;

}