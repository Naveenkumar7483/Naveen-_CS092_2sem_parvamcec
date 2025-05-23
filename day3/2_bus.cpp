#include<iostream>
using namespace std;
class bus
{
public:
    string route;
    int capacity;
    bus(string_route,int_capacity)
    {
        cout<<"constructor is called automatically"<<endl;
        this->route=route;
        this->capacity=capacity;
    }
    void display()
    {
    cout<<"Route:"<<route<<endl;
    cout<<"Capacity:"<<capacity<<endl;
    }
};
int main()
{
        bus b1("route 32", 45);
        b1.display();
        return 0;

}
