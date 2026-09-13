/*
Pointers are variables that store address of
another variable

normal variable declaration: int a;
int *ptr; -> ptr is a pointer variable that points to an integer
             ptr is a variable that can store the address of an integer.

To store the address of a in ptr, we need to use a statement:
ptr = &a; -> & (ampersand) gives the address of the particular variable 
(in this case a).

In fact, it returns a pointer to this particular variable.



int a;
int *ptr;
ptr = &a;
a = 5;

printf(ptr);  -> 204
printf(&a);   -> 204
printf(&ptr); -> 64
printf(*ptr); -> 5 (DEREFFERENCING)

*ptr = 8;
printf(*ptr); -> 8 (DEREFFERENCING)


*/

/*
int - 4 bytes
char - 1 byte
float -4 bytes

*/