#include<iostream>
#include<fstream>
using namespace std;
class student{
    private:
    string name;
    int roll_num;
    public :
   void input()
   {
    cout<<"enter student name: "<<name<<endl;
    cin>>name;
    cout<<"enter student roll_num:"<<roll_num<<endl;
    cin>>roll_num;
   }
   void display()
   {
    cout<<"student name:"<<name<<endl;
    cout<<"student roll_num:"<<roll_num<<endl;

   }
    
};
int main(){
    double a=10;
    cout<<"size of a:"<<sizeof(a)<<endl;
    student s1;
    ofstream fout("students.dat,ios::binary");
    s1.input();
    fout.write((char*)&s1,sizeof(s1));
    fout.close();

student s2;
ifstream fin("student.dat",ios::binary);
fin.read((char*)&s2,sizeof(s2));
s2.display();
return 0;
}