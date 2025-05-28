#include <iostream>
#include <string>
using namespace std;

class Person
{
private:
    string name;
    int age;
    string gender;

public:
    Person()
    {
        name = "";
        age = 0;
        gender = "";
    }
    Person(string name, int age, string gender) : name(name), age(age), gender(gender)
    {
    }
    // getters
    string getName()
    {
        return name;
    }
    int getAge()
    {
        return age;
    }
    string getGender()
    {
        return gender;
    }

    // setters
    void setName(string name)
    {
        this->name = name;
    }
    void setAge(int age)
    {
        this->age = age;
    }
    void setGender(string gender)
    {
        this->gender = gender;
    }
    void inputBasicDetails()
    {
        cout << "Enter name: " << endl;
        getline(cin, name);
        // cin >> name;
        cout << "Enter age: " << endl;
        cin >> age;
        cin.ignore();
        cout << "Enter gender: " << endl;
        getline(cin, gender);
    }
    void displayBasicDetails()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Gender: " << gender << endl;
    }
};

class Student : public Person
{
private:
    int rollNumber;
    string classGrade;
    string section;

public:
    Student()
    {
        rollNumber = 0;
        classGrade = "";
        section = "";
    }
    Student(string name, int age, string gender, int roll_num, string class_grade, string section) : Person(name, age, gender), rollNumber(roll_num), classGrade(class_grade), section(section)
    {
    }
    void inputStudentDetails()
    {
        cout << "Enter Student Details: " << endl;
        inputBasicDetails();
        cout << "Enter Roll Number: " << endl;
        cin >> rollNumber;
        cin.ignore();
        cout << "Enter Class Grade: " << endl;
        getline(cin, classGrade);
        cout << "Enter Section: " << endl;
        getline(cin, section);
    }
    void displayStudentDetails()
    {
        cout << "Student Details: " << endl;
        displayBasicDetails();
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Class Grade: " << classGrade << endl;
        cout << "Section: " << section << endl;
    }
};

class Teacher : public Person
{
private:
    int employeeId;
    string subject;
    string department;

public:
    Teacher()
    {
        employeeId = 0;
        subject = "";
        department = "";
    }
    Teacher(string name, int age, string gender, int emp_id, string sub, string dept) : Person(name, age, gender), employeeId(emp_id), subject(sub), department(dept)
    {
    }
    void inputTeacherDetails()
    {
        cout << "Enter Teacher Details: " << endl;
        inputBasicDetails();
        cout << "Enter Employee ID: " << endl;
        cin >> employeeId;
        cout << "Enter Subject : " << endl;
        getline(cin, subject);
        cin.ignore();
        cout << "Enter Department : " << endl;
        getline(cin, department);
    }
    void displayTeacherDetails()
    {
        cout << "Teacher Details: " << endl;
        displayBasicDetails();
        cout << "Employee ID: " << employeeId << endl;
        cout << "Department: " << department << endl;
        cout << "Subject: " << subject << endl;
    }
};

int main()
{
    Student s1;
    s1.inputStudentDetails();
    s1.displayStudentDetails();

    Teacher t1;
    t1.inputTeacherDetails();
    t1.displayTeacherDetails();
}          
