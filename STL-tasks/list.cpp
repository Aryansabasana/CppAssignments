#include <iostream>
#include <list>
using namespace std;

int main() {
    
    int m;
    int n; 
    int x;

    list<int> l1;
    list<int> l2;
    
    cout<<"Enter the number of elements you want in l1  "<<endl;
    cin>>m;

    cout<<"Enter the number of elements you want in l2  "<<endl;
    cin>>n;


    for(int i=0; i<m; i++) {
        cout<<"Enter the number"<<endl;
        cin>>x;
        l1.push_back(x);
    }

     for(int i=0; i<n; i++) {
        cout<<"Enter the number"<<endl;
        cin>>x;
        l2.push_back(x);
    }

    for(int value: l2) l1.push_back(value);

    l1.sort();

    for(int value: l1) {
        cout<<value<<endl;
    }




    return 0;
}