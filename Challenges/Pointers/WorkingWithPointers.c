// Working with Pointers


#include <stdio.h>


int main()
{

// int a;          // integer
// int *p;         // Pointer to integer
// a = 10;
// p = &a; // &a is address of a
// *p = 12; // DEREFFERENCING

// int b = 20;

// *p = b; // Will the address in p change to point b?
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
// printf("Address of p is: %d\n", p);
// printf("Size of integer is %d bytes\n", sizeof(int));
// printf("Address of p + 1 is:  %d\n", p+1);
// printf("Address of p + 2 is:  %d\n", p+2);



int a = 1025;
int *p;
p = &a;

printf("Size of integer is %d bytes\n", sizeof(int));
printf("Address  = %d, value = %d\n", p, *p);
printf("Address of p + 1 is:  %d\n", p+1);
printf("Address of p + 2 is:  %d\n", p+2);

printf("----------------\n");

// char *p0;
// p0 = (char*)p; // typecasting
// printf("Size of char is %d bytes\n", sizeof(char));
// printf("Address  = %d, value = %d\n", p0, *p0);
// printf("Address  = %d, value = %d\n", (p0+1), *(p0+1)); // -> 4

// 1025 = 00000000 00000000 00000100 00000001
//                               ^ =4       ^ = 1


printf("----------------\n");

// VOID POINTER - GENERIC POINTER

void *p0;
p0 = p; // This is valid, we don t need to typecast it
printf("Size of void is %d bytes\n", sizeof(void)); // 1 byte
printf("Address  = %d\n", p0);





return 0;

}
