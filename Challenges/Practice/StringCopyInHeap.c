// Goal of this script is 
// to write a function with these requirements:
// 1. Calculate the length of input_str.
// 2. Dynamically allocate the exact correct amount of memory 
// using malloc so that it fits the string and the '\0'.
// 3. Copy the data into the new memory space (you can use strcpy).
// 4. Return the new pointer.
// (Note: For this specific step, ignore checking if malloc 
// succeeds or if input_str is NULL. 
// We will add those defensive checks in the very next step. 
// I want you to focus strictly on allocating the correct size).


#include <stdio.h>
#include <stdlib.h>
#include <string.h>


char* duplicate_string(const char* input_string)
{

    if (NULL == input_string)
    {
        return NULL; 
    }
    
    size_t input_string_length = strlen(input_string);

    char* input_string_copy = malloc((input_string_length+1)*sizeof(char));

    if (NULL == input_string_copy)
    {
        return NULL;
    }

    strcpy(input_string_copy, input_string);
    
    return input_string_copy;

}



int main()
{

    char my_string[] = "Ela Giwrgh";

    printf("Original string (in Stack) is: %s\n", my_string);
    printf("Address of original string (in Stack) is: %p\n\n", my_string);

    char* my_string_copy = duplicate_string(my_string);

    if (NULL == my_string_copy)
    {
        printf("Memory allocation issue!\n");
        return 1;
    }

    printf("Copied string (in Heap) is: %s\n", my_string_copy);
    printf("Address of copied string (in Heap) is: %p\n", my_string_copy);

    free(my_string_copy);

    return 0;
}