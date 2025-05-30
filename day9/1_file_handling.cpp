#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream fout;
    fout.open("1_file_handling.txt");
    fout<<"hello world\n";
    fout.close();
    cout<<"file is closed"<<endl;
}
