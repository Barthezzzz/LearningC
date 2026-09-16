// Character Arrays and Pointers (3)

// Arrays are ALWAYS passed to function by reference

#include <stdio.h>

void print(char *C)
{
    for (int i = 0; *(C+i) != '\0'; i++)
    {
        printf("%c" ,*(C+i));
    }   
}

int main()
{

    char C[20] = "Hello";


    print(C);

    return 0;
}