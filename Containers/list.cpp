#include <iostream>
#include <list>
using namespace std;

int main() {
    
    list<int> l1 = {1,2,3,4,5};

    for(int value: l1) {
        cout<<value<<endl;
    }

    l1.push_front(6);

    for(int value: l1) {
        cout<<value<<endl;
    }


    return 0;
}