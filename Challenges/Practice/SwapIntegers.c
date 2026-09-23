#include <stdio.h>


void safe_swap(int *a, int *b)
{

    if (a == NULL || b == NULL)
    {
        return;
    }


    int temp;

    temp = *a;
    *a = *b;
    *b = temp;


}



int main()
{

    int x = 5;
    int y = 10;

    printf("Before the swap:\n");
    printf("x is: %d\n", x);
    printf("Address of x is: %p\n", (void*)&x);

    printf("y is: %d\n", y);
    printf("Address of y is: %p\n", (void*)&y);
    


    safe_swap(&x,&y);

    printf("\nAfter the swap:\n");
    printf("x is: %d\n", x);
    printf("Address of x is: %p\n", (void*)&x);

    printf("y is: %d\n", y);
    printf("Address of y is: %p\n", (void*)&y);

    printf("===============\n");

    return 0;
}