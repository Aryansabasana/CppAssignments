#include <iostream>
#include <string>
using namespace std;

struct Employee
{
    int id;
    string name;
    int salary;
};


int main() {
    Employee Emp[5];
    

    for(int i=0; i<5; i++) {
        cout<<"Enter employee id: ";
        cin>> Emp[i].id;

        cout<<"Enter employee name: ";
        cin>> Emp[i].name;

        cout<<"Enter employee salary: ";
        cin>> Emp[i].salary;

        
    }

    int maxS = Emp[0].salary;

    for(int i=0; i<5; i++) {
        cout<< "The data of the Employees are" << "ID: " << Emp[i].id << "Name: " << Emp[i].name << "Salary: " << Emp[i].salary << endl;
        if(Emp[i].salary>maxS) {
            maxS = Emp[i].salary;
        }
    }

    cout<<"Highest salary is" << maxS << endl;

    

    
    return 0;
}