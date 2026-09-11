// 4. Find the Largest of Three Numbers

#include <stdio.h>

 

int main() 
{

    int a, b, c;

 

    // Prompt the user to enter three integers

    printf("Please enter 3 different integers: \n");

    // Read the three integers
    scanf("%d %d %d", &a, &b, &c);

    

    // Determine the largest number among a, b, and c

    if (a >= b && a >= c)
    {
        printf("The largest number is: %d\n", a);        
    }
    else if (b >= c)
    {
        printf("The largest number is: %d\n", b);
    }
    else
    {
        printf("The largest number is: %d\n", c);
    }



    return 0;

}