#include <iostream>
#include <fstream>
using namespace std;

int main() {
    
    ofstream file;

    file.open("sample2.txt");

    string statement;



    if(file.is_open()) {
        getline(cin,statement);
        file<<statement<<endl;
        file.close();
    }


    return 0;
}