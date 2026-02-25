#include <iostream>
using namespace std;

class Student{
    public:
    string name;
    string gender;
    int age;

    Student(string name, string gender, int age) {
       this->name = name;
        this->gender = gender;
        this->age = age;
    }

    void display() {
        cout<<"The initialized values are...."  << this->name << " " << this->gender << " " << this->age <<endl;
    }
};

int main() {
    
    Student s1("Aryan","Male",19);

    s1.display();

    return 0;
}