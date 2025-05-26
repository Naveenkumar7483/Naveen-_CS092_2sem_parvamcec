#include<iostream>
using namespace std;
class BankAccount
{
    private:
   string holder_name;
    public:
    BankAccount( string holder_name){
        this->holder_name=holder_name;
        cout<<"constructor called for :"<<this->holder_name<<endl;
    }
        ~BankAccount(){
            cout<<"destructor called for:"<<holder_name<<endl;
        }
    
};
int main(){
    BankAccount b1("naveen");
    BankAccount b2("darshan");
    BankAccount b3("pavan");
    return 0;
}