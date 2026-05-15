#include<iostream>
using namespace std;

int main()
{
    int i,num,fact=1;

    cout<<"Enter an integer:";
    cin>>num;
    i=num;

    do
    {
        fact*=i;
        i--;
    }
    while(i>1);


    cout<<"Factorial of "<< num<<" is "<< fact<<endl;
}