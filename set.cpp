#include <iostream>
#include <set>
using namespace std;

int main() {


    // set <int> s1 = {45,6,78,3,0,65,3};

    // for(int value : s1) {
    //     cout<< value << endl;
    // }

    // auto it = s1.find(45);
    // if(it != s1.end()) {
    //     cout<< "Found: " << *it << endl;
    // }
    // else {
    //     cout<< "Not found :  " << *it << endl;
    // }


    multiset <int> s1 = {4,65,48,76,12,2,3,3,48,25,25};
    s1.insert(3);
    cout<<s1.count(3)<<endl;
    return 0;
}