// Pointers as function arguments - call by reference

# include <stdio.h>

void Increment(int *p)
{
    *p = (*p) +1;
    printf("Address of the pointer that points to the variable in increment = %d\n", p);
}

int main()
{

    int a;
    a = 10;
    Increment(&a);
    printf("Address of variable a in main = %d\n", &a);
    printf("a = %d\n", a);



    return 0;
}