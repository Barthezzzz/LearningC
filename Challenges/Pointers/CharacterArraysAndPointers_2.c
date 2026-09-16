// Character Arrays and Pointers (2)


#include <stdio.h>
#include <string.h>

int main()
{



    char C1[6] = {"Hello"};

    char *C2;

    C2 = C1;

    printf("C2[0] = %c\n", C2[0]);
    printf("C2[1] = %c\n", C2[1]);




    // int len = strlen(C1);
    // printf("Size of C1:  %d bytes\n", sizeof(C1));
    // printf("Length of C1: %d\n", len);
    // printf("The actual string is: %s\n", C1);

    // printf("---------------------\n");

    // printf("The character in position 0 is: %c\n", C1[0]);
    // printf("The size of the character in position 0 is: %d\n", sizeof(C1[0]));



    return 0;
}