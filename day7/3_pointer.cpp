   
int main()
{
    //variable
    int a = 10;
    cout<<"adress of a:"<<&a<<endl;

    int *ptr =&a;

    cout<<"ptr value:"<<ptr<<endl;
    cout<<"ptr address:"<<&ptr<<endl;

    cout<<"value of a using ptr:"<<a<<endl;   
    cout<<"value of a using ptr:"<<*ptr<<endl;
    cout<<"value of a:"<<*(&a)<<endl;
    cout<<"value of a:"<<*(*(&ptr))<<endl;
    cout<<"value of a:"<<*(&(*ptr))<<endl;

    return 0;
}