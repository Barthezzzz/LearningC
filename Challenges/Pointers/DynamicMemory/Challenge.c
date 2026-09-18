// My challenge in Dynamic memory allocation - Heap


#include <stdio.h>
#include <stdlib.h>

int* createNumberList(int size)
{
    int *ptr = (int*)malloc(size * sizeof(int));
    if (NULL == ptr)
    {
        printf("Error in Dynamic Memory allocation!\n");
        return NULL;
    }

    for (int i = 0; i < size; i++)
    {
        *(ptr + i) = i + 1;
    }

    return ptr;
}



int main()
{
    int size = 6;
    int* table = createNumberList(size);

    if (table != NULL)
    {
        for (int i = 0; i < size; i++)
        {
            printf("%d\t", *(table + i));
        }
        free(table);
        table = NULL;
    }
    




    return 0;
}