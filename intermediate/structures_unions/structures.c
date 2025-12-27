#include<stdio.h>

//STRUCTURE DECLARATION/DEFINATION
struct Student
{
    char name[50];
    int age;
    float grade;
};


int main(){

    /*
    defination for structures
    A structure is a user-defined data type that groups different data types into a single entity.
    */
   //EXAMPLE OF STURCTURE
    printf("the structure \n");

    //Create a structure variable
    struct Student s1 ={"rohan",20,80.3};
    
    //Access structure members
    printf("%s\n", s1.name);
    printf("%d\n", s1.age);
    printf("%.2f\n", s1.grade);

    return 0;
}