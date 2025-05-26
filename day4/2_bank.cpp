#include<iostream>
using namespace std;
class bankaccount{
    private:
    string holder_name;
    int accountnumber;

    public:
    string getholder_name()
    {
        return this->holder_name;
    }
    int getaccountnumber()
    {
        return this->accountnumber;
    }
    void setholder_name(string holder_name)
    {
        this->holder_name=holder_name;

    }
    void setaccountnumber(int accountnumber)
    {
        this->accountnumber=accountnumber;
    }
};
int main(){
    bankaccount b1;
    b1.setholder_name ("naveen");
    b1.setaccountnumber(922);
    cout<<"holder_name is:"<<b1.getholder_name()<<endl;
    cout<<"accountnumber is:"<<b1.getaccountnumber()<<endl;
    return 0;
}