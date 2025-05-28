#include<iostream>
using namespace std;
class complex
{
    int real;
    int img;
    public:
    complex()
    {
        this->real=0;
        this->img=0;

    }
    complex(int real,int img)
    {
        this->real=real;
        this->img=img;

    }
    void display()
    {
        cout<<"the result is:"<<real<<"+i"<<img<<endl;

    }
    complex operator+(complex &c2)
    {
    complex temp;
    temp.real=real+c2.real;
    temp.img=img+c2.img;
    return temp;
    }
};
int main(){
    complex c1(4,2);
    complex c2(3,2);
    c1.display();
    c2.display();
    complex c3 = c1 + c2;
    c3.display();
    return 0;
}