#include <iostream>
using namespace std;

class Student
{
public:
    // properties
    string name;
    string usn;
    int class_name;

    // actions
    void write()
    {
        cout << "Student is writing" << endl;
    }
    void read()
    {
        cout << "Student is reading" << endl;
    }
};

int main()
{
    // creating object
    Student std1, std2;

    // student1 details
    std1.name = "Naveen kumar";
    std1.usn = "cs0999";
    std1.class_name = 12;

    cout << "Student Name: " << std1.name << endl;
    cout << "Student Usn: " << std1.usn << endl;
    cout << "Student class: " << std1.class_name << endl;

    std1.write();
    std1.read();

    std2.name = "Naveen kumar bolegai";
    std2.usn = "cs092";
    std2.class_name = 12;

    cout << "Student Name: " << std2.name << endl;
    cout << "Student Usn: " << std2.usn << endl;
    cout << "Student class: " << std2.class_name << endl;

    std2.write();
    std2.read();
    return 0;
}

/**
 * access modifiers:
 * =================
 * 1. public  - we can access any where
 * 2. private(default) - the scope of private is wthin the class or we cannot abel to access otu side the class
 * 3. protected - we can access within the class and derived class(child class)
 */