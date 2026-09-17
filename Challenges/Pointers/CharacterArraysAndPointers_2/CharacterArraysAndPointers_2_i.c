// Characters and Pointers - Part 2

// Concept: String constants - Constant pointers


# include <stdio.h>
# include <string.h>

void print(const char* C)   // Now even though it is NOT a string literal, I can NOT
                            // modify cause I set it as constant
{
    while (*(C) != '\0')
    {
        printf("%c", *(C));
        C++;
    } 
    printf("\n");
}


int main()
{

    char C[20] = "Hello"; // string gets stored in the space for array (so, it will go into Stack)
                          // Character array of sixe 20
   
   
    // char *C = "Hello";      // If I use this, the string is stored as a compile time constant
                            // It can NOT be modified 
                            // It is basically a pointer in Stack that points to the first
                            // element of the character array, so to 'H'
                            // The "Hello " is stored in the Read-Only Data / Flash memory



    

    print(C);



    return 0;
}