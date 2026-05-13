#include<iostream>
using namespace std;

int main()
{
    int n1,n2,n3;
    cout<<"Enter three number:\n";
    cin>>n1>>n2>>n3;

    if(n1>=n2&&n1>=n3)
    {
        cout<<n1<<" is largest number\n";
    }
    else if(n2>=n1&&n2>=n3)
    {
        cout<<n2<<" is largest number\n";

    }
    else if(n3>=n1&&n3>=n2)
    {
        cout<<n3<<" is largest number\n";

    }
    
}