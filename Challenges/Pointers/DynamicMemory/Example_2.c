// Example (2) in Dynamic Memory Allocation or Heap
# include <stdio.h>
# include <stdlib.h>

int main()
{

    int n;
    printf("How many numbers you want to save?  ");
    scanf("%d", &n);


    int *arr = (int*)malloc(n * sizeof(int));

    // Yoda condition
    if (NULL == arr)
    {
        printf("Error in Heap memory allocation!\n");
        return 1;
    }


    for (int i = 0; i < n; i++)
    {
        arr[i] = (i + 1) * 10;
    }

    printf("The array's elements are: \n");
    for (int i = 0; i < n; i++ )
    {
        printf("arr[%d] = %d\n", i, arr[i]);
    }


    free(arr);
    arr = NULL;



    return 0;
}