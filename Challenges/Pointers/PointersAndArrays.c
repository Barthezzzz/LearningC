// Pointers and Arrays

# include <stdio.h>

int main()
{

    int A[5] = 
    {2,4,5,8,1};


    // int *p = &A[0]; // This 
    // is the same as 
    int *p = A; // this

    // What we are saying here is that the pointer to the array
    // ALWAYS 
    // points to the first element of the array.



    printf("p = %d\n", p);
    printf("*p = %d\n", *p);
    printf("*A = %d\n", *A);
    printf("p+1 = %d\n", p+1);
    printf("*(p+1) = %d\n", *(p+1));


    printf("&p = %d\n", &p);





    return 0;
}