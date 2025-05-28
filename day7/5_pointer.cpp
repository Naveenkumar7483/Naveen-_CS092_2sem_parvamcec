#include <iostream>
using namespace std;
void change (int *p1)
{
    *p1= *p1+90;

}
int main(){
    int a=10;
    int *ptr = &a;
    change(ptr);
    cout<<"the value of a:"<<a<<endl;
    return 0;
}