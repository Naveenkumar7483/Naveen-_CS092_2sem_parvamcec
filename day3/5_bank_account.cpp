#include<iostream>
using namespace std;
class bankAccount
{
public:
    string holder_name;
    int ac_no;
    bankAccount(string name,int ac_no)
    {
        cout<<"constructor is called automatically" << endl;
        this->holder_name=name;
        this->ac_no=ac_no;

    }
    bankAccount(bankAccount &b1){
         this->holder_name=b1.holder_name;
        this->ac_no=b1.ac_no;
    }
    void display()
    {
    cout<<"holder_name:"<<this->holder_name<<endl;
    cout<<"Account number:"<<ac_no<<endl;
    }
};
int main()
{
        bankAccount b1("naveen",102);
        b1.display();
        bankAccount b2 = b1;
        b2.display();
        return 0;
}