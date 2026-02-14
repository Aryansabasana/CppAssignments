#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    // int v1;
    vector<int> v1;
    int n =5;
    int x;
    while (n>0)
    {
        cout<<"Enter a number: "<<endl;
        cin>>x;
        v1.push_back(x);
        --n;
    }

    sort(v1.begin(),v1.end());


    for(int i=v1.size()-1; i>=0; i--) {
        cout<<v1[i]<<endl;
    }
    
    
   

    return 0;
}