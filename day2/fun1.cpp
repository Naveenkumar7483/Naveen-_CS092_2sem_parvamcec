#include<iostream>
using namespace std;
int add(int num1,int num2);
int main(){
int a=80;
int b=30;
int res=add(a,b);
cout<<"the result1 is:"<<res<<endl;
int c=20;
int d=56;
int res1=add(c,d);
cout<<"the result2 is:"<<res1<<endl;
}
int add(int num1,int num2){
    int sum=num1+num2;
    return sum;
}
