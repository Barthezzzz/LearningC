// Pointers and multi dimensional arrays (2)

#include <stdio.h>

void Func1(int *A) // Argument: 1-D Array of integers
{

}

void Func2(int (*A)[3]) // Argument: 2-D Array of integers
{

}

void Func3(int (*A)[2][2]) // Argument: 3-D Array of integers
{

}


int main()
{
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


    int A[2] = {1,2};
    int B[2][3] = {{2,4,6},{5,7,8}};

    Func1(A); // -> will return int* (a pointer to integer)

    Func2(B); // -> will return int (*)[3] (a pointer to an array of 3 integers)

    Func3(C); // -> will return int (*)[2][2] (a pointer to a 2d array of 2 rows and 2 columns
              //    of integers)


    printf("%d\n", C);

    printf("%d\n", *C);

    printf("%d\n", C[0]);

    printf("%d\n", &C[0][0][0]);

    printf("%d\n", *(&C[0][0][1])); // 5
    printf("%d\n", *(*(*(C+2)+1)+1)); // 13


    return 0;
}