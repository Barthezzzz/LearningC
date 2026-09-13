// Working with Pointers


#include <stdio.h>


int main()
{

int a;          // integer
int *p;         // Pointer to integer
a = 10;
p = &a; // &a is address of a
*p = 12; // DEREFFERENCING

int b = 20;

*p = b; // Will the address in p change to point b?
// NO, unless you write p = &a;



// printf("%d\n", p);
// printf("%d\n", *p);
// printf("%d\n", &a);


// Also these 2 
// int *p;         // Pointer to integer
// p = &a; // &a is address of a

// // can be replaced by
//  int *p = &a;
// // which is the same as this:
// int* p = &a;

/* POINTER ARITHMETIC


*/
printf("Address of p is: %d\n", p);
printf("Size of integer is %d bytes\n", sizeof(int));
printf("Address of p + 1 is:  %d\n", p+1);
printf("Address of p + 2 is:  %d\n", p+2);



return 0;

}
