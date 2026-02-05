#include <iostream>
using namespace std;

enum word{
    LOW,
    MEDIUM, 
    HIGH
};

int main() {
    // enum word a1=LOW;
    // enum word a2=MEDIUM;
    // enum word a3=HIGH;


    // cout<<"The value returned by a1,a2,a3 is : "<< a1 <<a2  <<a3 <<endl;
    
    // switch (a3)
    // {
    // case 0: cout<< "The case zero is executed" << endl;
    //     break;
    // case 1: cout<< "The case one is executed" << endl;
    //     break;

    // default: cout<<"the default value is executed for a3"<<endl;
    //     break;
    // }

    int a = 10;
    int *ptr = &a;
    int **ptr1 = &ptr;
    int *ptr2;

    // cout<< "The address of the tageted variable a is using original variable: "<< &a <<endl;
    //  cout<< "The address of the tageted variable a is using pointer: "<< ptr <<endl;
    //  cout<< "The address of the tageted variable a is using original variable: "<< *ptr <<endl;

     cout<< "The address of the tageted variable a is using original variable: "<< &ptr <<endl;
     cout<< "The address of the tageted variable a is using original variable: "<< ptr1 <<endl; 
      cout<< "The address of the tageted variable a is using original variable: "<< **ptr1 <<endl;
      
       cout<< "The address of the tageted variable a is using original variable: "<< ptr2 <<endl;

    return 0;
}