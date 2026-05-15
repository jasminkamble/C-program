#include<iostream>
using namespace std;
int main()
{
    int n1,n2,add;
    int sub,div,multi;
    char op;
    cout<<"emter the op :";
    cin>>op;
    cout<<"Enter a number:";
    cin>>n1>>n2;

    switch(op)
    { 
        case '+':
        cout<<"Addition:"<<n1+n2;
        break;
        case '-':
        cout<<"Subtraction:"<<n1-n2;
        break;
        case '*':
        cout<<"multi:"<<n1*n2;
        break;
        case '/':
        cout<<"division:"<<n1/n2;
        break;
        default:
        cout<<"enter the correct operater";
        break;

    }


}