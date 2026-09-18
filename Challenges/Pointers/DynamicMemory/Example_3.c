// Example (3) in Dynamic Memory Allocation or Heap


# include <stdio.h>
# include <stdlib.h>


int* createZeroBuffer(int size)
{
    int *buffer = (int*)malloc(size * sizeof(int));

    if (NULL == buffer)
    {
        return NULL;
    }


    for (int i = 0; i < size; i++)
    {
        *(buffer + i) = 0;
    }

    return buffer;
}


int main()
{
    int size = 5;
    int *my_data = createZeroBuffer(size);

    if (NULL != my_data)
    {
        *(my_data + 1) = 99;

        for (int i = 0; i < size; i++)
        {
            printf("%d ", my_data[i]);
        }
        printf("\n");
    }

    free(my_data);
    my_data = NULL;

    return 0;
}