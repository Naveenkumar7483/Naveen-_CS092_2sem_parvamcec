#include<iostream>
using namespace std;

class person{
protected:
    string name;
    int age;
    int weight;
    person()
    {
        cout<<"person constructor"<<endl;

    }
};
    class student : public person
    {
        int roll_num;
        public:
        student(string name,int age,int weight,int roll_num)
        {
            cout<<"student constructor"<<endl;
            this->name=name;
            this->age=age;
            this->weight=weight;
            this->roll_num=roll_num;
        }
        void display(){
            cout<<"student details:"<<endl;
            cout<<"student name:"<<name<<endl;
            cout<<"student age:"<<age<<endl;
            cout<<"student weight:"<<weight<<endl;
            cout<<"student roll number:"<<roll_num<<endl;

        }
};
int main()
{
    student s1("naveen kumar",20,47,92);
    s1.display();
}
    
