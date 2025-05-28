#include <iostream>
#include <cmath>
using namespace std;
class shape{
    public:
 virtual void calculateArea()
    {
        cout<<"Area not defined for generic shape"<<endl;
    }
};
class circle:public shape{
    private:
    double radius;
    public:
    circle(double r){
        radius=r;
    }

void calculateArea() override{
    double area=3*radius*radius;
    cout<<"area of circle:"<<area<<endl;
}
};
class rectangle:public shape{
    private:
    double length,width;
    public:
    rectangle(double l,double w){
        length=l;
        width=w;
    }
    void calculateArea() override{
        double area= lengh * width;
        cout<<"area of rectangle:"<<area<<endl;
    }
};
class triangle:public shape{
    private:
    double base,height;
    public:
    triangle(double b,double h){
        base=b;
        height=h;
    }
    void calculateArea() override{
        double area=0.5*base*height;
        cout<<"area of triangle:"<<area<<endl;
    }

};
int main(){
    circle c(20);
    rectangle r1(4.0,3.0 );
    triangle t(5.0,2.0);
    c.calculateArea();
    r1.calculateArea();
    t.calculateArea();
    return 0;
}