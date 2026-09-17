// Pointers And Multidimensional Arrays


// DON'T FORGET

// B[i][j] = *( B[i] + j ) = 
//         
//         = *( *(B + i) + j )


#include <stdio.h>

int main()
{

    int B[2][3] = 
    {
        {2,3,6},
        {4,5,8}
    }
    ;

    // int *p = B   //    This will return a pointer to 1-D array of 3 integers
                    //  As a result, this will return a compilation error


    // We can define a pointer to 1-D array of 3 integers like this:
    int (*p)[3] = B;

    printf("%p\n", (void *)B); // Prints the base memory address of array B (the address where 
                            // B[0][0] lives) formatted as a pointer in hexadecimal.
                            // On a 64-bit target, this outputs the full 64-bit address.
  
                            // '(void *)' explicitly casts the pointer to match the ISO C 
                            // standard requirement for '%p', which strictly expects a generic 
                            // 'void *' address regardless of the underlying data type.

    printf("%d\n", B);      // Points to the entire 2D array. Where does it start? 
                            // At the first byte of B[0][0]
    
                            // Instructs printf to interpret the argument as a standard 
                            // 32-bit signed decimal integer ('int').
                            // On a 64-bit target, this truncates the address to its lower 
                            // 32 bits and prints them in decimal (mismatched type / bug).
                   

    printf("%d\n", *B);     // Because B[0] = *B
    // This is the same as: 
    printf("%d\n", B[0]);   // Because B[0] = *B
    // which is the same as:
    printf("%d\n", &B[0][0]);

    printf("%d\n", *(*B + 1) ); // 3





    return 0;
}