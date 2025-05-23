#include<iostream>
using namespace std;
class bankAccount
{
public:
    string holder_name;
    int ac_no;
    bankAccount()
    {
        cout<<"constructor is called automatically"<<endl;
    }
};
int main()
{
     bankAccount b1;
    return 0;
}