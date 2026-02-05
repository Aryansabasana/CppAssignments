#include <iostream>
using namespace std;

 int addition(int num1,int num2){
        cout<<num1+num2<<endl;
}

int subtraction(int num1, int num2) {
    if(num1>num2) {
        cout<<num1-num2<<endl;
    }
    else{
        cout<<num2-num1<<endl;
    }
}

int multiplication(int num1, int num2) {
    cout<<num1*num2<<endl;
}

int division(int num1, int num2) {
    if(num2==0) {
        cout<<"Invalid number"<<endl;
    }
    else{
        cout<<num1/num2<<endl;
    }
}

int main() {
    int num1;
    cout<<"Enter the number1: ";
    cin>>num1;
    int num2;
    cout<<"Enter the number2: ";
    cin>>num2;
    char opr;
    cout<<"Enter the operator: ";
    cin>>opr;

    if(opr=='+') {
        addition(num1,num2);
    }

    if(opr=='-') {
        subtraction(num1,num2);
    }


    if(opr=='*') {
        multiplication(num1,num2);
    }


    if(opr=='/') {
        division(num1,num2);
    }

    

   
    return 0;
}