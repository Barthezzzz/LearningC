// Pointers and multi dimensional arrays (2)

#include <stdio.h>

void Func1(int *A) // Argument: 1-D Array of integers
{
    printf("Func1 output: %d\n", *A);
}

void Func2(int (*B)[3]) // Argument: 2-D Array of integers
{
    printf("Func2 output: %d\n", **B);
}

void Func3(int (*C)[2][2]) // Argument: 3-D Array of integers
{
    printf("Func3 output: %d\n", ***C);
}


int main()
{

    int A[2] = {1,2};
    int B[2][3] = {{2,4,6},{5,7,8}};

    int C[3][2][2] = 
    {
        {
            {2,5},
            {7,9}
        },
        {
            {3,4},
            {6,1}
        },
        {
            {0,8},
            {11,13}
        }
        
    }; 




    Func1(A); 

    Func2(B); 

    Func3(C); 


    printf("%d\n", C);

    printf("%d\n", *C);

    printf("%d\n", C[0]);

    printf("%d\n", &C[0][0][0]);

    printf("%d\n", *(&C[0][0][1])); // 5
    printf("%d\n", *(*(*(C+2)+1)+1)); // 13


    return 0;
}