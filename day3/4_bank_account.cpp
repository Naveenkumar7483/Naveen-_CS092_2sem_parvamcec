#include<iostream>
using namespace std;
class bankAccount
{
public:
    string holder_name;
    int ac_no;
    //constructor
    bankAccount(){
        cout<<"default constructor"<<endl;
        this->holder_name = "unkown";
        this->ac_no=0; 
    }
    bankAccount(string name,int ac_no)
    {
        cout<<"constructor is called automatically"<<endl;
        this->holder_name=name;
        this->ac_no=ac_no;

    }
    void display()
    {
        cout<<"holder_name:"<<this->holder_name<<endl;
        cout<<"Account number:"<<ac_no<<endl;
    }
};
int main()
{
        bankAccount b1;
        bankAccount b2("naveen",102);
        b1.display();
        b2.display();
        return 0;
}