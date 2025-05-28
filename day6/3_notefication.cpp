
#include<iostream>
using namespace std;
class message
{
    public:
    void sendmessage(string email,string message)
    {
        cout<<"Email send successfully:"<<endl;
        cout<<"Email:"<<email<<endl;
        cout<<"message:"<<message<<endl;
    }
    void sendmessage(long long ph,int otp)
    {
        cout<<"OTP send successfully:"<<endl;
        cout<<"phone number:"<<ph<<endl;
        cout<<"OTP"<<otp<<endl;

    }

};

int main()
{
    message m1;
    m1.sendmessage("naveen@gmail.com","hello world");
    m1.sendmessage(9980884494,123);
} 