#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v = {10,20,30};

    for(int value: v) {
        cout << value << endl; 
    }

    v.push_back(52);

    for(int value: v) {
        cout << value << endl; 
    }

    v.pop_back();

    for(int value: v) {
        cout << value << endl; 
    }

    v.insert(v.begin()+2, 48);

    for(int value: v) {
        cout << value << endl; 
    } 

    v.erase(v.begin()+3);
    
    for(int value: v) {
        cout << value << endl; 
    } 

    v.clear();

    cout<< v.size() << endl;

    cout << v.empty() << endl;

    return 0;
}