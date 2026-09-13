// Arrays as function Arguments

#include <stdio.h>

int SumOfElements(int A[], int size)
{

    int sum = 0;
    // int size = sizeof(A) / sizeof(A[0]);
    // printf("SumofElements - Size of A = %d, size of A[0] = %d\n", sizeof(A), sizeof(A[0]));
    for (int i = 0; i < size; i++)
    {
        sum += A[i];
    }

    return sum;
}


// Basically, what we understand from this, is that
// there is no Refernce by value in arrays.
// When we put an array as a function argument,
// it is basically the same as int A[] ===== int *A
// That means that the the argument is basically a pointer 
// which points at the address of the array in the main.
// This makes perfect sense cause an array can be very big 
// and we don't need to create a copy of all the data every time.
// We just create a copy of the address of the array.

// That being said, we can not skip putting the size as a second
// argument.

int main()
{
    int A[] = {1,2,3,4,5};
    int size = sizeof(A) / sizeof(A[0]);
    printf("Main - Size of A = %d, size of A[0] = %d\n", sizeof(A), sizeof(A[0]));

    int total = SumOfElements(A, size);

    printf("Sum of elements = %d\n", total);



    return 0;
}