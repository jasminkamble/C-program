#include<iostream>
using namespace std;

int main()
{
    int i,num,fact=1;

    cout<<"Enter an integer:";
    cin>>num;
    i=num;

    while(i>1)
    {
        fact*=i;
        i--;
    }

    cout<<"Factorial of "<< num<<" is "<< fact<<endl;
}