#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int add(int a, int b){
    return a+b;
}

int main()
{

    /*
    A pointer is a variable that stores the memory address of another variable. Instead of holding a direct value, it holds the address where the value is stored in memory. It is the backbone of low-level memory manipulation in C.
    */

    printf("\t\tINITIALIZE THE POINTER:\n");
    int num = 10;
    int *ptr = &num;
    // same we can initialize for char,void and floating type allso
    char *pntr;
    /*
    The wild pointers are pointers that have not been initialized with something yet. These types of C-pointers can cause problems in our programs and can eventually cause them to crash. If values are updated using wild pointers, they could cause data abort or data corruption.
    */
    // below is the wild pointer
    void *ptr2;
    float *ptr3;

    printf("Syntax: pointer_name = &variable\n");
    printf("now we can print the adderess of the ptr like %d\n", ptr);

    printf("\t\tDEREFERENCE A POINTER\n");
    printf("we can get the value stored in the address like %d\n", *ptr);

    // lets finde out the size of pointer
    printf("the size of int pinter is %d\n", sizeof(ptr));
    printf("the size of charecter pointer is %d\n", sizeof(pntr));

    // special types of pointers
    printf("\t\tSPECIAL TYPES OF POINTERS\n");
    // Null pointer
    int *ptr4 = NULL;

    printf("%d", ptr4);

    printf("\t\tDANGLING POINTEER\n");

    /*
    A pointer pointing to a memory location that has been deleted (or freed) is called a dangling pointer.
    Such a situation can lead to unexpected behavior in the program and also serve as a source of bugs in C programs.
    */

    int *point = (int *)malloc(sizeof(int));

    for (int i = 0; i < sizeof(point); i++)
    {
        printf("enter the %d pointer element\n", i);
        scanf("%d", &point[i]);
    }
    printf("%d\n", point);
    // after below free call, ptr become a dangling pointer
    free(point);
    printf("the memory freed\n");
    point = NULL;

    // constant pointers
    printf("\t\tCONSTANT POINTERS\n");

    int x = 20, y = 30;
    // creating a constant pointer
    int *const ptrconst = &x;

    printf("the constant pointer is %d\n", *ptrconst);
    // trying to ressing it to y
    // ptrconst = &y;
    printf("trying to assign a value to the constant variable\n");

    printf("\t\tPOINTER FUNCTION\n");
    
    //Declare a function pointer that matches
    //the signature of add() function
    int (*fptr)(int,int);

    //Assigning a address of add()
    fptr=&add;

    //Call the function via ptr
    printf("%d\n",fptr(10,3));

    return 0;
}