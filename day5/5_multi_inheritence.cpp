#include<iostream>
using namespace std;

class person{
protected:
    string name;
    int age;
    int weight;
    public:
    person(string name,int age,int weight):name(name),age(age),weight(weight)
    {
        cout<<"person constructor"<<endl;

    }
};
    class employe : public person
    {
        protected:
        int emp_id;
        public:
       employe(string name,int age,int weight,int emp_id):person(name,age,weight),emp_id(emp_id)   
        {
            cout<<"employe constructor"<<endl;
        }
    };
    class manager  : public employe
    {

   int salary;
    public:
    manager(string name,int age,int weight,int emp_id,int salary):employe(name,age,weight,emp_id),salary(salary)
    {
        cout<<"manager constructor"<<endl;
    }

     void display(){
            cout<<"manager details:"<<endl;
            cout<<"manager name:"<<name<<endl;
            cout<<"manager age:"<<age<<endl;
            cout<<"manager weight:"<<weight<<endl;
            cout<<"employe id:"<<emp_id<<endl;
            cout<<"manager salary"<<salary<<endl;

        }
    };
int main()
{
    manager m1("naveen kumar",20,47,92,456000);
    m1.display();
}
    
