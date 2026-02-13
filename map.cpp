#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
    // map <int, string> m1;

    // m1[3]="rishab";
    // m1[1] = "sam";

    // for(auto& [keys, values] : m1){
    //     cout<< "key is" << keys << "and it's value is" << values << endl;
    // }


    multimap<int, string> mm;
    mm.insert({1, "Arjun"});
    mm.insert({2, "Bhavin"});
    mm.insert({1, ""}); // Duplicate key 1 allowed

    for (auto& [key, value] : mm) {
        cout << key << ": " << value << endl;
    }

    return 0;
}