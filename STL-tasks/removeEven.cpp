#include <iostream>
#include <vector>
using namespace std;

int main() {
   vector<int> v1;
    int x;

    for(int i=0; i<3; i++) {
        cout<<"Enter the number: "<< endl;
        cin>>x;
        v1.push_back(x);
    }

   

    for(int i=2; i>=0; i--) {
        if(i%2==0) {
            v1.erase(v1.begin() + i);
        }
       
    }

    cout<<v1.size()<<endl;

    for(int value: v1) {
        cout<<value<<endl;
    }

    return 0;
}