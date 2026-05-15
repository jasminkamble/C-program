#include<iostream>
using namespace std;

int main()
{
    int i,n;
    cout<<"Enter a number:-";
    cin>>n;

    cout<<"Multiplication table:"<<endl;
    for(i=2;i<=10;i++)
    {
        cout<<i<<"*"<<n<<"="<<i*n<<endl;
    }
}