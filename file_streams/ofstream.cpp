#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ofstream filestream("javatest.txt");
    if(filestream.is_open())
    {
        filestream<<"wlecome to txt"<<endl;
        filestream<<"how are you"<<endl;
        filestream<<"zal get-out"<<endl;
    }
    else
    {
        cout<<"file cannot open"<<endl;
    }
    return 0;
}

