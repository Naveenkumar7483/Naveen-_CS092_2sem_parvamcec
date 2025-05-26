#include<iostream>
using namespace std;

class employe{
protected:
    string name;
    int age;
    int weight;
    public:
    employe(string name,int age,int weight):name(name),age(age),weight(weight)
    {
        cout<<"employe constructor"<<endl;

    }
};
    class worker : public employe
    {
        int reg_num;
    
    
        public:
        worker(string name,int age,int weight,int reg_num):employe(name,age,weight),reg_num(reg_num)     
        {
            cout<<"worker constructor"<<endl;
            this->name=name;
            this->age=age;
            this->weight=weight;
            this->reg_num=reg_num;
        

            
        }
        void display(){
            cout<<"worker details:"<<endl;
            cout<<"worker name:"<<name<<endl;
            cout<<"worker age:"<<age<<endl;
            cout<<"worker weight:"<<weight<<endl;
            cout<<"registor number"<<reg_num<<endl;
        
        }
};
int main()
{
    worker e1("naveen kumar",20,47,10);
    e1.display();
}
    
