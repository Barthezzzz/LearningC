// Allocate block of memory
// malloc - returns a void* malloc(size_t size)
// calloc - returns a void* malloc(size_t num, size_t size)
// realloc- returns a void* malloc(void* ptr, size_t size)


// De-allocate block of memory
// free

#include <stdio.h>
#include <stdlib.h>

int main()
{
    // First argument is HOW MANY units of the data type you want 
    // or the number of elements
    int *p = (int*)calloc(3, sizeof(int));
    // It will create a block of 3 integers, so 12 bytes
    // and every memory block in those addresses will be 0.


    // THE MAIN DIFFERENCE BETWEEN malloc() AND calloc() is that
    // malloc() does NOT initialize the values - so there are garbage values
    // calloc() initializes the values with 0.


    // realloc()
    // To change the size of the block of memory you created 
    // with malloc() or calloc()



    return 0;
}