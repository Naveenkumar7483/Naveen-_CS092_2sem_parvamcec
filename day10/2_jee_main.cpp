

#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    static int idCounter;
    int regID;
    string name;
    string dob;
    int age;
    string state;

public:
    Student(string n,string d, int a, string c) {
        regID = ++idCounter; 
        name = n;
        dob=d;
        age = a;
       state = c;
    }

    void display() {
        cout << "\n--- JEE MAIN RESISTRATION ---" << endl;
        
        cout << "\nYour JEE Main Registration Number is: " << regID << endl;
        cout << "Name: " << name << endl;
        cout <<"Date of birth: "<<dob<<endl;
        cout << "Age: " << age << endl;
        cout << "state: " <<state << endl;
    }
};

int Student::idCounter = 1000 + rand() % 9000;
        
int main() {
    string name,dob, state;
    int age;

    cout << "Enter student name: ";
    getline(cin, name);

    cout <<  "Enter Date of birth(DD//MM//YYYY):";
    getline(cin,dob);

    cout << "Enter age: ";
    cin >> age;
    cin.ignore();

    cout << "Enter state: ";
    getline(cin, state);
   
    Student s1(name, dob, age, state);

    s1.display();

    return 0;
}