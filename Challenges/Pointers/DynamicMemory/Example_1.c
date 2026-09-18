// Example in Dynamic Memory Allocation or Heap


# include <stdio.h>
# include <stdlib.h>

int main()
{

    int a;      // Local Variable - goes on Stack
    int *p;    // Local Variable - goes on Stack

    // Let's say we want to store an integer on the Heap
    // To reserve or get some space allocated on the Heap,
    // we need to call the malloc() function
    // The malloc() function asks for 
    // "How much memory to allocate on the heap in bytes"
    // malloc() will return a (by default VOID) pointer to 
    // the starting address of this new allocated memory in Heap
    p = (int*)malloc(sizeof(int));


    // We need to confirm that the memory was allocated because 
    // It might be that there is no memory left to be allocated
    // due to other processes
    // Especially in μC where the RAM is small
    if (p == NULL)
    {
        printf("Failed to allocate memory in Heap");
        return 1;
    }

    // (We have done typecasting here because malloc
    // returns void pointer, but p is an integer pointer)


    *p = 100;

    printf("With malloc:\n");
    printf("The starting address of the block in Heap that the pointer p points is: %d\n", p);
    printf("The value at this address is: %d\n", *p);

    // This function clears the memory that we used for the integer in Heap
    // IT IS THE RESPONSIBILITY OF THE PROGRAMMER TO CLEAR ANYTHING
    // ON THE HEAP IF HE HAS ALLOCATED AND DOES NOT NEED IT FURTHER
    free(p);

    printf("\n");

    printf("After freeing malloc:\n");
    printf("The starting address of the block in Heap that the pointer p points is: %d\n", p);
    printf("The value at this address is: %d\n", *p);

    return 0;
}