#include<iostream>
using namespace std;

int main()
{
    int x;
    int y;

    cout<<"Enter x:";
    cin>>x;
    cout<<"Enter y:";
    cin>>y;

    cout<<(x&&y)<<endl;
    cout<<(x||y)<<endl;
    cout<<(!y)<<endl;
}