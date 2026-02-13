#include <iostream>
using namespace std;

int main() {
    int num1;
    cout<<"Enter the number";
    cin>>num1;

    if(num1%2==0 && num1>0) {
        cout<<"The number is even and positive"<<endl;
    }

    else if(num1%2==0 && num1<0) {
        cout<<"The number is even and negative"<<endl;
    }

    else if(num1%2==0 && num1==0) {
        cout<<"The number is even and zero"<<endl;
    }

    else {
        cout<<"The number is odd"<<endl;
    }


    return 0;
}