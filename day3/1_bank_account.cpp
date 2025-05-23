#include<iostream>
using namespace std;
class bankAccount{
    public:
    string holder_name;
    int ac_no;
};
int main()
{
    bankAccount b1;
    b1.holder_name="Naveen kumar";
    b1.ac_no=100;
    cout<<"holder_name:"<<b1.holder_name<<endl;
    cout<<"Account number:"<<b1.ac_no<<endl;
    return 0;
}