#include <iostream>
using namespace std;
class Employee
{
public:
    string name;
    int id;
    float basesalary;

protected:
    Employee(string name, int id, float basesalary) : name(name), id(id), basesalary(basesalary)
    {
    }
    virtual void calculatesalary()
    {
        cout << "basesalary: " << basesalary << endl;
    }
    virtual void display(string name, int id)
    {
        cout << "name" << name << endl;
        cout << "id" << id << endl;
        calculatesalary();
    }
};
class Manager : public Employee
{
private:
    float bonus;

public:
    Manager(string name, int id, float basesalary, float bonus) : Employee(name, id, basesalary), bonus(bonus)
    {
    }
    void calculatesalary()
    {
        float salary = basesalary + bonus;
        cout << "salary: " << salary << endl;
    }
    void display()
    {
        cout << "name: " << name << endl;
        cout << "id: " << id << endl;
        calculatesalary();
    }
};
class Developer : public Employee
{
private:
    float overtimepay;

public:
    Developer(string name, int id, float basesalary, float overtimepay) : Employee(name, id, basesalary), overtimepay(overtimepay)
    {
    }

    void calculatesalary()
    {
        float salary = basesalary + overtimepay;
        cout << "salary: " << salary << endl;
    }
    void display()
    {
        cout << "name: " << name << endl;
        cout << "id: " << id << endl;
        calculatesalary();
    }
};
int main()
{
    Manager m1("naveen", 12, 50000, 12000);
    m1.display();
    Developer d1("vinith", 23, 50000, 20000);
    d1.display();
    return 0;
}
