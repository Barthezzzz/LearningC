// Character Arrays and Pointers


// String: - group of characters

// e.g: "John", "Hello world", "I am feeling lucky"


// How to store strings
// The character array needs to be large enough to accomodate the string

// Size of array >= number of characters in string + 1
// example: "John" -> Size >= 5
// Why do we need space for 1 extra character?

// In order to know where the string ends, we put another character at 
// the end of the string.
// This character is: /0

// All the functions in C expect this character

// RULE: String in C needs to be terminated by a NULL character -> \0



#include <stdio.h>
#include <string.h>

int main()
{

    // We can write it like this:
    
    // C[0] = 'J';
    // C[1] = 'O';
    // C[2] = 'H';
    // C[3] = 'N';
    // C[4] = '\0';
    
    // Or we can write it like this:
    // C[5] = {'J', 'O', 'H', 'N', '\0'};

    // But we usually write it as:
    char C[ ] = {"JOHN"}; // PREFERED, but notice that in this
                          // case, we don't mention the \0

    int len = strlen(C);
    printf("Size of C:  %d bytes\n", sizeof(C));
    printf("Length of C: %d\n", len);
    printf("The actual string is: %s\n", C);



    return 0;
}