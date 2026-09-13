// 10. Swap Two Numbers Without a Temporary Variable

#include <stdio.h>


int main() {

    int a, b;
    
    // Prompt the user to enter two integers
    printf("Enter 2 integers: ");

    // Read the inputs
    scanf("%d %d", &a,&b);

    // Swap the values of a and b without using a temporary variable
    printf("The values before the swap are: a = %d and b = %d\n", a, b);

    a = a + b;
    b = a - b;
    a = a - b; 

    printf("-----------------------\n");

    // Print the swapped values of a and b

    printf("The values after the swap are: a = %d and b = %d", a, b); 

    return 0;

}