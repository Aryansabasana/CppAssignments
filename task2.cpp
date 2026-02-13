#include <iostream>
using namespace std;

int main() {
    int num1;
    cout<<"Enter the number";
    cin>>num1;
    int num=num1;
    int temp;
    while(num1>=1) {
        temp = temp*10 + num1%10;
        num1=num1/10;
    }

    if(temp==num) {
            cout<<"true"<<endl;
    }

    else {
        cout<<"false"<<endl;
    }



    
    return 0;
}