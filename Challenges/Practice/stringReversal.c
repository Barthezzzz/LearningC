/*
The Challenge: In-Place String Reversal
Write a complete C program containing a custom function that reverses a string in-place using pointers.

The Constraints:

You cannot include <string.h> or use any standard library string functions (like strlen).

You must reverse the string in the exact same memory space it already occupies 
(do not create a second array to hold the reversed string).

You must use pointers to navigate the memory (e.g., using char *start and char *end), 
not just array indexing (like str[i]).

Call your function from main() to demonstrate that it works, and print the before and after states.


*/

#include <stdio.h>

char* stringRev(char* arr)
{
    int length = 0;
    for (int i = 0; *(arr + i) != '\0'; i++)
    {
        length += 1;
    }


    char* start = arr;
    char* end = arr + length -1;


    char temp;
    while (start < end)
    {
        temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }

    return arr;


}


int main()
{

    char myArr[20];


    printf("Please write a string:\n");

    scanf("%19s", myArr);



    printf("The word before the function implemented is:\n");

    for (int i = 0; *(myArr + i) != '\0'; i++)
    {
        printf("%c",*(myArr + i));
    }


    printf("\nThe word after the function implemented is:\n");

    // stringRev(myArr);
    printf("%s\n", stringRev(myArr));


}