#include<iostrem>
using namespace std;
class person{
    string name;
    int age;
    public:
    person(string name,int age):name(name),age(age){

    }
    void display_person()
    {
        cout<<"name:"<<name<<endl;
        cout<<"age:"<<age<<endl;

    }

};

class student:public person
{
int roll_num;
public:
student(string name, int age, int roll_num):person(name,age),salary(salary)
{
}
void display_teacher()
{
    cout<<"teacher details:"<<endl;
    display_person();
    cout<<"salary:"<<salary<<endl;
}
};
int main()
{
    teacher t1("pavan",23,20000);
    t1.display_teacher();
    student s1("vinith",18,102);
    s1.display_student();
}
