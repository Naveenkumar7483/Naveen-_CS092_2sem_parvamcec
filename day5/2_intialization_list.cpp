#include<iostream>
using namespace std;

class employe{
    private:
    string name;
    int work_hours;
    public:
   // Student(string name,int roll_num){
   // this->name=name;
    //this->roll_num=roll_num;
  //}
    employe(string name,int work_hours) : name(name),work_hours(work_hours)
    {
        cout<<"constructor is called"<<endl;
    }
    void display()
    {
        cout<<"employe name:"<<name<<endl;
        cout<<"work hours:"<<work_hours<<endl;
    }
};
int main(){
    employe s1("naveen",102);
    s1.display();
}