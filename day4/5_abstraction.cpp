
#include <iostream>
using namespace std;

// abstract class - the class contains atleast one pure function
class Person
{
    virtual void displayDetails() = 0;
};

class Student : public Person
{
private:
    string name;
    int roll_num;

public:
    Student(string name, int roll_num)
    {
        this->name = name;
        this->roll_num = roll_num;
    }

    void displayDetails()
    {
        cout << "Student name: " << this->name << endl;
        cout << "Roll number: " << this->roll_num << endl;
    }
};

int main()
{
    Student s1("pavan    ", 123);
    s1.displayDetails();
    return 0;
}

