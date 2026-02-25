#include <iostream>
using namespace std;


//it is a class only no object

class Car{

    //to access the any member form anywhere
    public:
         string company_name;
         int mileage;
         string engine;


         void print() {
            cout<<  "The print function is defined inside car class:  "<< endl;

            cout<< "Company name is:  " << this->company_name << endl;
         }

};

int main() {

    cout<< "now creating the actual object of class->Car"<<endl;

    //object decalre karne ka tarika

    Car c1;

    c1.company_name = "TVS";
    c1.mileage = 45;
    c1.engine = "V8";


    cout<<"The data is been inserted succesfully...  "<<endl;

    c1.print();

    cout<< "The function is called...  "<< endl;

    return 0;
}