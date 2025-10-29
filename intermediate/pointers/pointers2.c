#include<stdio.h>
 
//EXAPLE OF MULTILEVEL POINTERS

int main(){

    printf("\t\tEXAMPLE OF MULTILEVEL POINTERS\n");
    //varaible declaration 
    int var=10;
    //single pointer pointing to a variable
    int* ptr=&var;
    //multilevel pinter pointing to the single pointer
    int** ptr1=&ptr;

    //accessing the values using all three
    printf("var: %d\n",var);
    printf("*ptr:%d\n",*ptr);

    printf("**ptr1:%d\n",**ptr1);
    
    return 0;
}