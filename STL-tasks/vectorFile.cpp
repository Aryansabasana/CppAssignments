#include <iostream>
#include <vector>
#include <algorithm>
#include <fstream>
using namespace std;

int main() {
    int n;
    cout<<"Enter the size of vector: "<<endl;
    cin>>n;

    vector<int> v1(n);
    int x;

    for(int value: v1) {
        cout<<"Enter the element"<<endl;
        cin>>x;
        v1.push_back(x);
    }

    sort(v1.begin(), v1.end());

    reverse(v1.begin(), v1.end());

    ofstream outfile("data.txt");

    if(outfile.is_open()) {
        for(int value: v1) {
            outfile<< value << endl;
        }
        outfile.close();
    }

    else {
        cout<< "Error opening file" << endl;
    }


    
    return 0;
}