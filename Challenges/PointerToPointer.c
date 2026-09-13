// Pointer to Pointer

#include <stdio.h>

int main()
{

    int x = 5;

    int *p = &x;

    *p = 6;

    int **q = &p;

    printf("Address of pointer to pointer q is: %d \n", q);
    printf("Address of pointer to pointer q is: %d \n", *q);
    printf("Address of pointer to pointer q is: %d \n", **q);


    return 0;
}