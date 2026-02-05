#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    //===>READ OPERATION
    string oneLine;
    ifstream file;
    file.open("sample.txt");

    if(file.is_open()) {
        while(getline (file,oneLine)){
            cout<< oneLine << endl;
        }
        file.close();
    }


//==>WRITE OPERATIOON
    // ofstream file;

    // file.open("sample.txt",ios::app);

    // if(file.is_open()) {
    //     file << "second time using the file operation" << endl;
    //     file.close();
    // }

    return 0;
}