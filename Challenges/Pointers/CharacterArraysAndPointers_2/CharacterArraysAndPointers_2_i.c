// Characters and Pointers - Part 2

// Concept: String constants - Constant pointers


# include <stdio.h>
# include <string.h>

void print(char* C)
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

    char *C = "Hello";

    print(C);



    return 0;
}