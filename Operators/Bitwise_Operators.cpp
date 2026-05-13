#include<iostream>
using namespace std;

int main()
{
    int x,y;
    cout<<"enter num X:";
    cin>>x;
    cout<<"Ente num Y:";
    cin>>y;

    cout<<"AND:"<<(x&y)<<endl;
    cout<<"OR:"<<(x|y)<<endl;
    cout<<"XOR:"<<(x^y)<<endl;
    cout<<"NOT:"<<(~y)<<endl;
    cout<<"lift shift:"<<(x<<2)<<endl;
    cout<<"right shift:"<<(x>>2)<<endl;

}