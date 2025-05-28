#include <iostream>
using namespace std;
int main()
{
    int a=10;
    int &r=a;
    r=r+10;
    cout<<"value of a:"<<a<<endl;
}