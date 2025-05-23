#include<iostream>
using namespace std;
int add(int num1,int num2);
void sub (int num1,int num2);
int mul();
void div();
int main(){
int a=0,b=0;
cout<<"enter two numbers:"<<endl;
cin>>a>>b;
int res = add(a,b);
cout<<"the type2 :"<<res<<endl;
sub(a,b);
int res1=mul();
cout<<"the mul is:"<<res1<<endl;
div();
}
int add(int num1,int num2){
int sum=num1+num2;
return sum;
}
void sub(int num1,int num2){
    cout<<"the sub is:"<<num1-num2<<endl;
}
int mul(){
    int a=10;
    int b=10;
    return a*b;
}
void div(){
    int a=10;
    int b=2;
    cout<<"the div result is:"<<a/b<<endl;
}
