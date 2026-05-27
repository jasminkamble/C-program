#include<iostream>
using namespace std;

int add(float b,int a,double c)
{
    return a+b+c;
}
int add(float b,int c)
{
    return b+c;
}
int add(double c,int a)
{
    return a+c;
}

int main()
{
    cout<<"------------"<<endl;
    cout<<add(25,23.2,25.3666)<<endl;
    cout<<"------------"<<endl;
    cout<<add(25.33,23)<<endl;
    cout<<"------------"<<endl;
    cout<<add(23.3333,25)<<endl;
    cout<<"------------"<<endl;

}