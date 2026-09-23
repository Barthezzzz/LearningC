// Write a function that concatenates (joins) two strings together 
// into a brand new dynamically allocated string.

// Function Signature:
// char* concatenate_strings(const char* str1, const char* str2)

// Requirements:

// Check if either str1 or str2 is NULL. If so, handle 
// it safely (returning NULL is fine for now).

// Calculate the lengths using size_t.

// Allocate exactly enough heap memory to hold str1, 
// followed by str2, plus the '\0'.

// Check if malloc succeeds.

// Copy the contents of str1 into the new memory, 
// then append str2 (you can use strcpy and strcat from <string.h>, 
// or do it manually if you feel adventurous).

// Return the new pointer.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


char* concatenate_strings(const char* str1, const char* str2)
{
    if (str1 == NULL || str2 == NULL)
    {
        return NULL;
    }

    size_t length_str1 = strlen(str1);
    size_t length_str2 = strlen(str2);

    size_t length = length_str1 + length_str2;

    char* str_1_2 = malloc((length+1)*sizeof(char));

    if (str_1_2 == NULL)
    {
        return NULL;
    }

    strcpy(str_1_2, str1);
    strcat(str_1_2, str2);




    return str_1_2;
}

int main()
{

    char str1[] = "Ela";
    char str2[] = "Giwrgh";

    char* concatenated_string = concatenate_strings(str1, str2);

    if (concatenated_string == NULL)
    {
        printf("Memory allocation error!\n");
        return 1;
    }



    printf("The concatenated string in Heap is: %s\n", concatenated_string);
    printf("The address of the concatenated string in Heap is: %p\n", concatenated_string);

    free(concatenated_string);

    return 0;
}