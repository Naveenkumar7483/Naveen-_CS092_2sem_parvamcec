#include<iostream>
using namespace std;

class Student{
    private:
    string name;
    int roll_num;
    public:
   // Student(string name,int roll_num){
   // this->name=name;
    //this->roll_num=roll_num;
  //}
    Student(string name,int roll) : name(name),roll_num(roll)
    {
        cout<<"constructor is called"<<endl;
    }
    void display()
    {
        cout<<"name:"<<name<<endl;
        cout<<"roll number:"<<roll_num<<endl;
    }
};
int main(){
    Student s1("naveen",102);
    s1.display();
}