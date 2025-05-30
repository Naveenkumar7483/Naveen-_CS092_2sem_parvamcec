#include<iostream>
#include<fstream>
#include<sstream>
using namespace std;
int main()
{

    ifstream fin("1_file_handling.text");
    string line;
    while(getline(fin,line))
    {
        cout<<line<<endl;
    }
    fin.close();
    
 }