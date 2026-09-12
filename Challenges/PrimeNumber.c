// 6. Check if a Number Is Prime


#include <stdio.h>

#include <stdbool.h>

 

int main() 
{

    int num;

    bool isPrime = true;

 
    // Prompt the user to enter an integer greater than 1
    printf("Enter an integer greater than 1: ");

    // Read the integer input
    scanf("%d", &num);

    while (num <= 1)
    {
        printf("We said greater than 1: ");
        scanf("%d", &num);
    }
    // Check if the number is prime

    for (int i =2; i < num; i++)
    {
        if (num % i == 0)
        {
            isPrime = false;
            break;
        }
    }
    
    if (isPrime == true)
    {
        printf("The number %d is prime", num);
    }
    else
        printf("The number %d is NOT prime", num);

    return 0;

    
}