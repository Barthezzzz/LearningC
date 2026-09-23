// Pointers as Function returns


#include <stdio.h>
#include <stdlib.h>

int Add(int a, int b)   // Called function
{
    int c = a + b;
    return c;
}


int main()              // Calling function
{

    int x = 5;
    int y = 6;

    int z = Add(x,y);

    printf("%d\n", z);



    return 0;
}