#include <iostream>
using namespace std;

int main() {
    int arr[8]={1,2,3,4,5,6,7,8};

    int *ptr=arr;
    int evencount=0,oddcount=0;
    for(int i=0;i<8;i++)
    {
        if((i[ptr]% 2==0))
        {
            evencount++;
            
        }
        else
        {
            oddcount++;

        }

    }
    cout<<"even cout:"<<evencount<<endl;
    cout<<"odd count:"<<oddcount<<endl;
}
