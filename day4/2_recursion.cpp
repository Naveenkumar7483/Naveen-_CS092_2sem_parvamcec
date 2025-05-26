#include<iostream>
using namespace std;
int fact(int num);
int main(){
    int input;
    cout<<"enter a number:"<<endl;
    cin>>input;
    int res =fact(input);
    cout<<"result:"<<res;
}
int fact(int num)
{
    if(num==1){
        return 1;
    }
    return num*fact(num-1);
}